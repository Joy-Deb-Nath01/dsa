#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
int main()
{
    Node *n1=new Node();
    n1->data=29;
    n1->next=nullptr;
    Node *n2=new Node();
    n2->data=234;
    n2->next=nullptr;
    Node *n3=new Node();
    n3->data=232;
    n3->next=nullptr;

    //link the node
    n1->next=n2;
    n2->next=n3;

    Node *NewNode=new Node();
    NewNode->data=1000;
    NewNode->next=nullptr;

    //🚀 its adding time 
    NewNode->next=n1;

    //traverse time baby
    Node *current=NewNode;//if you use n1.next it will run from 2nd node and skip first one
    while(current !=nullptr)
    {
        cout<<current->data<<" ";
        current=current->next;
    }
}