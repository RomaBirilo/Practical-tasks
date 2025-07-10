#include "drawfigure.h"

DrawFigure::DrawFigure(QGraphicsScene *scene, QWidget *parent)
    :QGraphicsView(scene,parent),currentFigure(nullptr),shapeType(Line){}

void DrawFigure::mousePressEvent(QMouseEvent *event)
{
    if(shapeType==Line)
    {
        if(event->button()==Qt::LeftButton)
        {
            startPoint=mapToScene(event->pos());
            currentFigure = scene()->addLine(QLineF(startPoint,startPoint), QPen(currentPenColor,2));
        }
    }
    else if(shapeType==Rectangle)
    {
        if(event->button()==Qt::LeftButton)
        {
            startPoint=mapToScene(event->pos());
            currentFigure = scene()->addRect(QRectF(startPoint,startPoint), QPen(currentPenColor,2),QBrush(currentBrushColor));

        }
    }
    else if(shapeType==Ellipse)
    {
        if(event->button()==Qt::LeftButton)
        {
            startPoint=mapToScene(event->pos());
            currentFigure = scene()->addEllipse(QRectF(startPoint,startPoint), QPen(currentPenColor,2),QBrush(currentBrushColor));
        }
    }
}

void DrawFigure::mouseMoveEvent(QMouseEvent *event)
{
    if(shapeType==Line)
    {
        if(currentFigure)
        {
            QPointF endPoint = mapToScene(event->pos());
            auto Line = dynamic_cast<QGraphicsLineItem*>(currentFigure);
            Line->setLine(QLineF(startPoint,endPoint));
        }
    }
    else if(shapeType==Rectangle)
    {
        if(currentFigure)
        {
            QPointF endPoint = mapToScene(event->pos());
            auto Rect = dynamic_cast<QGraphicsRectItem*>(currentFigure);
            Rect->setRect(QRectF(startPoint,endPoint));
        }
    }
    else if(shapeType==Ellipse)
    {
        if(currentFigure)
        {
            QPointF endPoint = mapToScene(event->pos());
            auto Ellipse = dynamic_cast<QGraphicsEllipseItem*>(currentFigure);
            Ellipse->setRect(QRectF(startPoint,endPoint));
        }
    }
}

void DrawFigure::mouseReleaseEvent(QMouseEvent *event)
{
    if(shapeType==Line)
    {
        if(event->button()==Qt::LeftButton && currentFigure)
        {
            QPointF endPoint = mapToScene(event->pos());
            auto Line = dynamic_cast<QGraphicsLineItem*>(currentFigure);
            Line->setLine(QLineF(startPoint,endPoint));
            Line->setFlags(QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsMovable);
            currentFigure = nullptr;
        }
    }
   else if(shapeType==Rectangle)
    {
        if(event->button()==Qt::LeftButton && currentFigure)
        {
            QPointF endPoint = mapToScene(event->pos());
            auto Rect = dynamic_cast<QGraphicsRectItem*>(currentFigure);
            Rect->setRect(QRectF(startPoint,endPoint));
            Rect->setFlags(QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsMovable);
            currentFigure = nullptr;
        }
    }
    else if(shapeType==Ellipse)
    {
        if(event->button()==Qt::LeftButton && currentFigure)
        {
            QPointF endPoint = mapToScene(event->pos());
            auto Ellipse = dynamic_cast<QGraphicsEllipseItem*>(currentFigure);
            Ellipse->setRect(QRectF(startPoint,endPoint));
            currentFigure=nullptr;
        }
    }
}
