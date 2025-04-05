#include<iostream>
using namespace std;
struct person //you can also declare inside the main function.
{              //but it wont be global.so you can not use it outside the main function     
    int age;
    double height;

};


int main()
{
    person p1;
    person p2;
    p1.age=40;
    p1.height=10.5;
    p2.age=45;
    p2.height=90.66;
    cout<<p1.age<<endl;
    cout<<p1.height<<endl;
    cout<<p2.age<<endl;
    cout<<p2.height<<endl;

}