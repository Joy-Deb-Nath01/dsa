#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *n1=new Node; //will be considered as Node();
    n1->data=10;
    n1->next=nullptr;

    Node *n2=new Node; //will be considered as Node();
    n2->data=20;
    n2->next=nullptr;

    Node *n3=new Node; //will be considered as Node();
    n3->data=30;
    n3->next=nullptr;

    //now connects this three nodes
    n1->next=n2;
    n2->next=n3;

    //now traverse🚀
    Node *current=n1;
    while(current !=nullptr)
    {
        cout<<current->data<<" ";
        current=current->next;
    }
    //now delete it you idiot..or else your popcorn will be leaked

    delete n1;
    delete n2;
    delete n3;

}