#include "stack.h"


template<typename T>
Stack<T>::Stack()
{
    root = nullptr;

    size = 0;
}
template<typename T>
void Stack<T>::Push(const T& newItem) {
    Node* newNode = new Node();
    newNode->data = newItem;
    newNode->next = root;
    root = newNode;
    size++;
    root = newNode;
}
template<typename T>
void Stack<T>::Push(const int itemPosition, T item)
{
    if (itemPosition > size)
        throw length_error("Lenght Error(Function Push() Line:24)");

    Node* temp = root;
    Node* CurrentNode = new Node();
    for (int i = 0; i <= itemPosition; i++)
    {
        CurrentNode = root;
        root = root->next;
    }
    Node* NewNode = new Node();
    NewNode->data = item;
    NewNode->next = root;
    CurrentNode->next = NewNode;
    size++;
    root = temp;
}
template<typename T>
T Stack<T>::Top() {
    if (IsEmpty())
        throw overflow_error("Stack Is Empty!!!(Function Top() Line:43)");

    return root->data;
}
template<typename T>
void Stack<T>::Pop() {
    if (IsEmpty())
        throw overflow_error("Stack Is Empty!!! (Function Pop() Line:50)");

    Node* DelNode = root;
    root = DelNode->next;
    delete DelNode;
    size--;
}
template<typename T>
void Stack<T>::Pop(const int itemPosition)
{
    if (itemPosition > size - 1)
        throw length_error("Lenght Error (Function Pop() Line:64)");
    Node* temp = root;
    for (int i = 0; i <= itemPosition; i++)
    {
        root = root->next;
    }
    delete root;
    root = temp;
    size--;
}
template<typename T>
bool Stack<T>::IsEmpty()const
{
    return root == nullptr;
}

