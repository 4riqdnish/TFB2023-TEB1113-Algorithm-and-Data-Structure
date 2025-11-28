#include<iostream>

using namespace std;

struct Node
{
    string data;
    Node* nextptr; 
};

int main()
{
    Node node1 = Node();
    Node node2 = Node();
    Node node3 = Node();
    
    node1.data = "test1";
    node1.nextptr = &node2;
    
    node2.data = "test2";
    node2.nextptr = &node3;
    
    node3.data = "test3";
    node3.nextptr = nullptr;
    
    Node* current = &node1;
    while(current != nullptr)
    {
        cout << current->data << "\n";
        current = current->nextptr;
    }
}
