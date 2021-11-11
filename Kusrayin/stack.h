#ifndef STACK_H
#define STACK_H
#include <iostream>

using namespace std;

template<typename T>
class Stack
{
private:

    struct  Node
    {
        T data;
        Node* next;
    };

    Node* root;

public:
    int size;
    Stack();

    void Push(const T& newItem);
    void Push(const int itemPosition, T item);

    T Top();
    T Top(const int iterator);
    void Pop();
    void Pop(const int itemPosition);
    bool IsEmpty()const;
    Node& operator[](const int itemPosition) {
        if (itemPosition > size-1)
            throw length_error("Lenght Error (Operator [] Line:36)");
        Node* temp = root;
        Node* NewNode = new Node();
        for (int i = 0; i < itemPosition; i++)
        {
            root = root->next;
        }
        NewNode = root;
        root = temp;
        return *NewNode;

    }
};

#endif // STACK_H
