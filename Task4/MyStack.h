//Бирило Роман 5 группа 1 курс
//Объявление методов и их реалазиция находится в одном заголовочном файле, потому что шаблонные классы нельзя разбивать


#ifndef MYSTACK_H
#define MYSTACK_H
#include <QString>
#endif // MYSTACK_H

template <typename T>
class Stack
{
public:
    Stack();
    ~Stack();
    void push(T data);
    void pop();
    void clear();
    bool empty();
    int size() { return Size; }
    T& top();
private:

    class Node
    {
    public:
        Node* pNext;
        T data;
        Node(T data = T(), Node* pNext = nullptr)
        {
            this->pNext = pNext;
            this->data = data;
        }
    };

    Node* head;
    int Size;
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


template <typename T>
Stack<T>::Stack()
{
    head = nullptr;
    Size = 0;
}

template <typename T>
Stack<T>::~Stack()
{
    clear();
}

template<typename T>
inline void Stack<T>::push(T data)
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
inline void Stack<T>::pop()
{
    if (Size != 0)
    {
        if (Size == 1)
        {

            Node* temp = head;
            head = nullptr;
            delete temp;
            Size--;

        }
        else
        {
            Node* current = find_prev();
            Node* temp = current->pNext;
            current->pNext = nullptr;
            delete temp;
            Size--;
        }
    }
}

template<typename T>
inline void Stack<T>::clear()
{
    if (Size != 0)
    {
        while (Size != 0)
            pop();
    }
    
}

template<typename T>
inline bool Stack<T>::empty()
{
    if (Size!=0)
    {
        return false;
    }
    return true;
}

template<typename T>
inline T& Stack<T>::top()
{
    if (Size != 0)
    {
        Node* current = head;
        while (current->pNext != nullptr)
        {
            current = current->pNext;
        }
        return current->data;
    }
    
}
