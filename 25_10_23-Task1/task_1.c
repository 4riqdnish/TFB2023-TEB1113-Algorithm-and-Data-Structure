#include <iostream>
using namespace std;

struct Node
{
    string data;
    Node* prevptr;
    Node* nextptr;
};

Node* top = nullptr;

// Function to push a new element to the stack
void push(string value)
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->nextptr = nullptr;

    if (top == nullptr)
    {
        newNode->prevptr = nullptr;
        top = newNode;
    }
    else
    {
        newNode->prevptr = top;
        top->nextptr = newNode;
        top = newNode;
    }

    cout << value << " pushed to stack.\n";
}

// Function to pop the top element from the stack
void pop()
{
    if (top == nullptr)
    {
        cout << "Stack is empty! Nothing to pop.\n";
        return;
    }

    cout << top->data << " popped from stack.\n";
    Node* temp = top;
    top = top->prevptr;

    if (top != nullptr)
        top->nextptr = nullptr;

    delete temp;
}

void display()
{
    if (top == nullptr)
    {
        cout << "Stack is empty.\n";
        return;
    }

    Node* current = top;
    cout << "Stack elements (top to bottom):\n";
    while (current != nullptr)
    {
        cout << current->data << "\n";
        current = current->prevptr;
    }
}

int main()
{
    push("test1");
    push("test2");
    push("test3");

    cout << "\n";
    display();

    cout << "\n";
    pop();
    pop();

    cout << "\n";
    display();

    return 0;
}
