#include "stack.h"
#include <iostream>
#include "Student.h"
using namespace std;
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
    //root = newNode;
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
        throw overflow_error("Stack Is Empty!!!(Function Top() Line:44)");

    return root->data;
}
template<typename T>
void Stack<T>::Pop() {
    if (IsEmpty())
        throw overflow_error("Stack Is Empty!!! (Function Pop() Line:51)");

    Node* DelNode = root;
    root = DelNode->next;
    delete DelNode;
    size--;
}
template<typename T>
void Stack<T>::Pop(const int itemPosition)
{
    if (itemPosition > size - 1)
        throw length_error("Lenght Error (Function Pop() Line:62)");
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
void Stack<T>::Swap(Stack stack, Node** head_ref, int x, int y)
{
    if (x == y)
        return;



    Node* prevX = NULL, * currX = *head_ref;
    prevX = &stack[x - 1];
    currX = &stack[x];

    Node* prevY = NULL, * currY = *head_ref;
    prevY = &stack[y - 1];
    currY = &stack[y];


    if (currX == NULL || currY == NULL)
        return;


    if (prevX != NULL)
        prevX->next = currY;
    else
        *head_ref = currY;


    if (prevY != NULL)
        prevY->next = currX;
    else
        *head_ref = currX;


    Node* temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;
}
template<typename T>
bool Stack<T>::IsEmpty()const
{
    return root == nullptr;
}

