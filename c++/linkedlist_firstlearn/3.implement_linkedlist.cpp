#include<iostream>
using namespace std;
struct Node
{
    int data; // The data stored in the node
    Node *next; // Pointer to the next node
};
int main()
{
    Node n1;// It's directly allocated in the stack memory.no need of star(*)
    n1.data=10;
    n1.next=nullptr;
}

/*Why Use * with new?

    When you use new, it returns a memory address (pointer) where the object is stored in heap memory.

    You need a pointer (Node*) to hold that address, which is why you declare the variable as a pointer.
    */