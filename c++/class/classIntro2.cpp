#include <iostream>
using namespace std;
class person  
{
    public: //this is first method..by making member variable public
    int age;
    int height;

};

int main()
{
    person p1;
    p1.age=10;
    cout<<p1.age<<endl;
}