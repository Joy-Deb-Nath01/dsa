#include<iostream>
using namespace std;
struct node 
{
    int data;
    node *next;
    node(int val)//parametrized constructor
    {
        data=val;
        next=nullptr;  // This node is not linked yet
    }
};
int main()
{
    node *first=new node(10); // Creates a node with value 10
    node *second=new node(20); // Creates another node with value 20

    first->next=second; // Now, first points to second

    cout << first->data << endl;  // 10
    cout << first->next->data << endl;  // 20
    cout << second->next << endl;  // 0 (nullptr, because it's the last node)

}