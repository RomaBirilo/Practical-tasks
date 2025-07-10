//Бирило Роман 5 группа 1 курс
//Объявление методов и их реалазиция находится в одном заголовочном файле, потому что шаблонные классы нельзя разбивать



#ifndef MYQUEUE_H
#define MYQUEUE_H
#include <QString>
#endif // MYQUEUE_H
using namespace std;
template <typename T>
class Queue
{
public:
    Queue();
    ~Queue();
    void push(T data);
    void pop();
    void clear();
    T& front();
    T& back();
    bool empty();
private:
    class Node
    {
    public:
        Node* pNext;
        T data;
        Node(T data = T(), Node* pNext = nullptr)
        {
            this->data = data;
            this->pNext = pNext;
        }
    };
    int Size;
    Node * head;
    Node* find_prev()
    {
        Node* current = head;
        for (int i = 0; i < Size - 2; i++)
        {
            current = current->pNext;
        }
        return current;
    }

};

template<typename T>
inline bool Queue<T>::empty()
{
    if(Size==0)
        return true;
    return false;
}

template<typename T>
inline T &Queue<T>::back()
{
    if (Size == 1)
        return head->data;
    else
    {
        Node* current = find_prev();
        current = current->pNext;
        return current->data;
    }
}

template<typename T>
inline T &Queue<T>::front()
{
    return head->data;
}

template<typename T>
inline void Queue<T>::clear()
{
    if (Size != 0)
    {
        while (Size != 0)
            pop();
    }
    
}

template<typename T>
inline void Queue<T>::pop()
{
    if (Size != 0)
    {
        Node* temp = head;
        head = head->pNext;
        delete temp;
        Size--;
    }
    
}

template<typename T>
inline void Queue<T>::push(T data)
{
    if (head == nullptr)
    {
        head = new Node(data);
        Size++;
    }
    else
    {
        Node* current = this->head;
        while (current->pNext != nullptr)
        {
            current = current->pNext;
        }
        current->pNext = new Node(data);
        Size++;
    }

}

template<typename T>
inline Queue<T>::~Queue()
{
    clear();
}

template<typename T>
inline Queue<T>::Queue()
{
    head=nullptr;
    Size=0;
}
