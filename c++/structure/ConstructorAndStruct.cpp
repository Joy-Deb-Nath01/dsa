#include<iostream>
using namespace std;
struct person
{
    int age;
    double weight;
    person(int a,double w)
    {
        age=a;
        weight=w;
    }
};

int main()
{
    person p(10,19.3);
    person p2(103,193.3);
    cout<<p.age<<" "<<p.weight<<endl;
    cout<<p2.age<<" "<<p2.weight<<endl;
}