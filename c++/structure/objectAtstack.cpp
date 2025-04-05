#include<iostream>
using namespace std;
struct person
{
    int age;
    double height;
};
int main()
{
    person p1;//static object creation at heap memory
    p1.age=10;
    p1.height=10.5;
    cout<<p1.age<<" "<<p1.height<<endl;
}
/*
Type	Syntax	Memory Location	Access
Static Object	Student s1;	Stack	Use . operator
Dynamic Object	Student* s1 = new Student();	Heap	Use -> operator
*/