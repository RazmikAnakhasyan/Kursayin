#include <iostream>
using namespace std;

template<typename T>
class Stack
{
private:

    struct  Node
    {
        T data;
        Node* next=nullptr;


    };

    Node* root;
    Node* first;
public:
    int size;
    Stack();

    void Push(const T& newItem);
    void Push(const int itemPosition, T item);

    T Top();
    T Top(const int iterator);
    T Pop();
    T Pop(const int itemPosition);
    bool IsEmpty()const;
    Node& operator[](const int itemPosition) {
        if (itemPosition > size)
            throw length_error("Lenght Error (Operator [] Line:36)");
        Node* temp = first;
        Node* CurrentNode = new Node();
        Node* NewNode = new Node();
        for (int i = 0; i < itemPosition; i++)
        {

            CurrentNode = first;
            first = first->next;

        }
        NewNode = first;

        first = temp;
        return *NewNode;

    }
};

