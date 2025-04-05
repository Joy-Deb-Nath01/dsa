#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
int main()
{
    Node *n1=new Node;//dynamically allocated node in heap maemory
    n1->data=100;
    n1->next=nullptr;
    cout<<n1->data<<endl;
    delete n1;//free allocated memory
    cout<<n1->data<<endl;//n1 object pointing nothing.
                            //thats why showing garbage value
}