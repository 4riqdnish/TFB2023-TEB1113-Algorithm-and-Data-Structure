#include<iostream>

using namespace std;

struct Node
{
    string data;
    Node* prevptr;
    Node* nextptr; 
};

int main()
{
    Node node1 = Node();
    Node node2 = Node();
    Node node3 = Node();
    
    node1.data = "test1";
    node1.prevptr = &node3;  // Make the previous pointer of node1 point to node3 (circular link)
    node1.nextptr = &node2;
    
    node2.data = "test2";
    node2.prevptr = &node1;
    node2.nextptr = &node3;
    
    node3.data = "test3";
    node3.prevptr = &node2;
    node3.nextptr = &node1;  // Make the next pointer of node3 point to node1 (circular link)
    
    // Printing in forward direction
    Node* current = &node1;
    cout << "Forward Traversal:\n";
    for (int i = 0; i < 3; i++)  // Loop 3 times to avoid infinite loop
    {
        cout << current->data << "\n";
        current = current->nextptr;
    }
    
    cout << "\n---New Cycle---\n\n";
    
    // Printing in reverse direction
    current = &node3;
    cout << "Reverse Traversal:\n";
    for (int i = 0; i < 3; i++)  // Loop 3 times to avoid infinite loop
    {
        cout << current->data << "\n";
        current = current->prevptr;
    }
}

