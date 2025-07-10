//Бирило Роман 5 группа 1 курс
//Объявление методов и их реалазиция находится в одном заголовочном файле, потому что шаблонные классы нельзя разбивать




#ifndef MYLIST_H
#define MYLIST_H
#include <QString>
#endif // MYLIST_H


template <typename T>
class List
{
public:
    List();
    ~List();
    bool empty();
    void push_back(T data);
    void push_front(T data);
    void insert(T data, int index);
    void remove_at(int index);
    void pop_back();
    void pop_front();
    void clear();
    int GetSize() { return Size; }
    T& operator[](const int index);

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
    Node* find_prev(int index)
    {
        Node* current = head;
        for (int i = 0; i < index - 1; i++)
        {
            current = current->pNext;
        }
        return current;
    }
};
template <typename T>
List<T>::List()
{
    Size = 0;
    head = nullptr;
}

template <typename T>
List<T>::~List()
{
    clear();
}

template<typename T>
bool List<T>::empty()
{
    if (Size!=0)
    {
        return false;
    }
    return true;
}

template<typename T>
void List<T>::push_back(T data)
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
void List<T>::push_front(T data)
{
    head = new Node(data, head);
    Size++;
}

template<typename T>
void List<T>::insert(T data, int index)
{
    if (index <= Size)
    {
        if (index == 0)
        {
            push_front(data);
        }
        else
        {
            Node* current = find_prev(index);
            current->pNext = new Node(data, current->pNext);
            Size++;

        }
    }
    
}

template<typename T>
void List<T>::remove_at(int index)
{
    if (index <= Size)
    {
        if (index == 0)
        {
            pop_front();
        }
        else
        {
            Node* current = find_prev(index);
            Node* temp = current->pNext;
            current->pNext = current->pNext->pNext;
            delete temp;
            Size--;
        }
    }
    

}

template<typename T>
void List<T>::pop_back()
{
    if(Size!=0)
        remove_at(Size - 1);

}

template<typename T>
void List<T>::pop_front()
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
void List<T>::clear()
{
    if (Size != 0)
    {
        while (Size)
            pop_front();
    }
    
}

template<typename T>
T& List<T>::operator[](const int index)
{
    if (index <= Size)
    {
        Node* current = this->head;
        int counter = 0;
        while (current != nullptr)
        {
            if (counter == index)
            {
                return current->data;
            }
            else
            {
                current = current->pNext;
                counter++;
            }
        }
    }
}
