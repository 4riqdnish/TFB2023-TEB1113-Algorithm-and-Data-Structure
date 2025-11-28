#include <iostream>
using namespace std;

struct Node
{
    string data;
    Node* prevptr;
    Node* nextptr;
};

Node* top = nullptr;
Node* order = nullptr;

void enque(string value)
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->nextptr = nullptr;

    if (order == nullptr)
    {
        newNode->prevptr = nullptr;
        order = newNode;
        top = newNode;
    }
    else
    {
        newNode->prevptr = order;
        order->nextptr = newNode;
        order = newNode;
    }

    cout << value << " enque to Que.\n";
}

void deque()
{
    if (top == nullptr)
    {
        cout << "Que is empty! Nothing to deque.\n";
        return;
    }

    cout << top->data << " deque from Que.\n";
    Node* temp = top;
    top = top->nextptr;

    if (top != nullptr)
        top->prevptr = nullptr;

    delete temp;
}

void display()
{
    if (order == nullptr)
    {
        cout << "Que is empty.\n";
        return;
    }

    Node* current = top;
    cout << "Que elements (left to right):\n";
    while (current != nullptr)
    {
        cout << current->data << "   ";
        current = current->nextptr;
    }
}

int main()
{
    enque("test1");
    enque("test2");
    enque("test3");

    cout << "\n";
    display();

    cout << "\n";
    deque();
    deque();

    cout << "\n";
    display();

    return 0;
}
