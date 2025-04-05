#include<iostream>
using namespace std;
struct Node 
{
    int age;
    Node *next;
};
int main()
{
    Node *n1=new Node();
    n1->age=107;
    n1->next=nullptr;
    Node *n2=new Node();
    n2->age=50;
    n2->next=nullptr;
    
    //adding two node in heap memory is slightly different
    n1->next=n2;//in stack n1.next=&n2;
    //if these two are connected you can access them by another node
    cout<<n2->age<<endl;
    cout<<n1->next->age<<endl;

    delete n1;
    delete n2;

}