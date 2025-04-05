#include<iostream>
using namespace std;
struct person
{
    int age;
    double weight;//you cant use auto inside of a struct
};
int main()
{
    person p[3];
    p[0].age=20;p[0].weight=20.5;
    p[1].age=30;p[1].weight=30.5;
    p[2].age=40;p[2].weight=40.5;

    for(int i=0;i<3;i++)
    {
       cout<< p[i].age<<" "<<p[i].weight<<endl;
    }
}