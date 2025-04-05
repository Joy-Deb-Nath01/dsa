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

    Node *n2=new Node; 
    n2->data=20;
    n2->next=nullptr;

    Node *n3=new Node; 
    n3->data=30;
    n3->next=nullptr;
    
    //now connects this three nodes
    n1->next=n2;
    n2->next=n3;

     //🚀 adding new node you big oof
     Node *newNode=new Node();
     newNode->data=384;
     newNode->next=n2;
    n1->next=newNode;//if you dont do this newNode will lose sight of you and cause memory leakage
                        //and again you can stll access n2 with newNode..newNode->next->data like that;
                        //but thats not the proper way
    //now traverse
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
    delete newNode;

}