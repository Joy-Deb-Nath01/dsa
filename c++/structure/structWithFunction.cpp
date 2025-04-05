#include<iostream>
using namespace std;
struct person
{
    int age;
};
void func(person p)
{
    cout<<p.age;
}
int main()
{   
    person p1={12};
    func(p1);

}