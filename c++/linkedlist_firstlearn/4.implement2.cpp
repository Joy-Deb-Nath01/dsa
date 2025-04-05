#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;

};                  //now we will see how to add more node on stack😮
int main()
{
    Node n1;
    n1.data=10;
    n1.next=nullptr;
    Node n2;
    n2.data=20;
    n2.next=nullptr;
  // 😎 yet not linked..we just created two node.now we have to linked these two


    //linking node1 with node 2
    n1.next=&n2;

    cout<<n1.data<<endl;
    cout<<n1.next->data<<endl;//should print 20;//shortcut for(*node.next).data
    cout<<n1.next<<endl;//will show adress of n2
    cout<<&n2<<endl;
    cout<<n1.next<<endl;

    //lets try something more


  //  cout<<*n1.next<<endl;😒 ha ha..cant do it;
 
 
  //Since *node1.next is an entire Node object,
  // we can't print it directly with cout. Instead, we need to print its members (data and next).
    cout<<(*n1.next).data<<endl;
    cout<<(*n1.next).next<<endl;//it holds nullpointer remember?😊
}

/*
Final Summary
Expression	Meaning
node1.next	Pointer to node2
*node1.next	Dereferencing node1.next, gives node2 itself
(*node1.next).data	Access data inside node2
node1.next->data	Shortcut for (*node1.next).data
*/