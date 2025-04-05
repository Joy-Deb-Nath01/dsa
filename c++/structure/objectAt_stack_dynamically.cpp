#include<iostream>
using namespace std;
struct person
{
    int age;
    double height;

};
int main()
{
    person *p1=new person();//dynamic object creation at heap memory

    p1->age=10;
    p1->height=20.5; // Use '->' to access members
    cout<<p1->age<<" "<<p1->height<<endl;
    //you have to delete it manually
    delete p1;
    cout<<p1->age<<endl; //this will show some garbage value

}
/*
     Stack vs Heap (Easy Explanation)

Think of stack as a notebook and heap as a warehouse.
Feature	Stack (Notebook)	Heap (Warehouse)
Size	Small and fixed	Large but requires management
Speed	Very fast	Slower
Memory Allocation	Automatic	Manual (new)
Deallocation	Automatic	Manual (delete)
Lifetime	Limited to function scope	Stays until manually freed

*/