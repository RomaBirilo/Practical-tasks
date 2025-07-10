#ifndef DRAWFIGURE_H
#define DRAWFIGURE_H
#include <QGraphicsView>
#include<QGraphicsItem>
#include <QMouseEvent>

class DrawFigure:public QGraphicsView
{
    Q_OBJECT
public:
    DrawFigure(QGraphicsScene *scene, QWidget *parent=nullptr);
    enum ShapeType {Line, Rectangle, Ellipse};

    void setPenColor(QColor color){currentPenColor=color;}
    void setBrushColor(QColor color){currentBrushColor=color;}
protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
private:
    QColor currentPenColor;
    QColor currentBrushColor;
    QPointF startPoint;
    QGraphicsItem *currentFigure;
    ShapeType shapeType;
public slots:
    void setShapeType(ShapeType type){shapeType=type;}
};

#endif // DRAWFIGURE_H
