#include "stack.h"
#include "Student.h"

template<typename T>
Stack<T>::Stack()
{
    root = nullptr;
    first = nullptr;
    size = 0;
}
template<typename T>
void Stack<T>::Push(const T& newItem) {
    Node* newNode = new Node();
    newNode->data = newItem;
    newNode->next = root;
    root = newNode;
    size++;
    first = newNode;
}
template<typename T>
void Stack<T>::Push(const int itemPosition, T item)
{
    if (size >= itemPosition)
        throw length_error("Lenght Error(Function Push() Line:24)");

    Node* temp = first;
    Node* CurrentNode = new Node();
    for (int i = 0; i < itemPosition; i++)
    {
        CurrentNode = first;
        first = first->next;
    }
    Node* NewNode = new Node();
    NewNode->data = item;
    NewNode->next = first;
    CurrentNode->next = NewNode;
    size++;
    first = temp;
}
template<typename T>
T Stack<T>::Top() {
    if (IsEmpty())
        throw overflow_error("Stack Is Empty!!!(Function Top() Line:43)");

    return root->data;
}
template<typename T>
T Stack<T>::Pop() {
    if (IsEmpty())
        throw overflow_error("Stack Is Empty!!! (Function Pop() Line:50)");

    Node* DelNode = root;
    T retElem = DelNode->data;
    root = DelNode->next;
    delete DelNode;
    size--;

    return retElem;
}
template<typename T>
T Stack<T>::Pop(const int itemPosition)
{
    if (size >= itemPosition)
        throw length_error("Lenght Error (Function Pop() Line:64)");
    Node* temp = first;
    Node* CurrentNode = new Node();
    for (int i = 0; i < itemPosition; i++)
    {

        CurrentNode = first;
        first = first->next;
    }
    CurrentNode->next = first->next;
    delete first;
    first = temp;
    size--;

}
template<typename T>
bool Stack<T>::IsEmpty()const
{
    return root == nullptr;
}

