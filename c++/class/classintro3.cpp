#include <iostream>
using namespace std;
class person  
{
    int age;
    int height;
    //use getter and setter method
 public:
    void setvalue(int n)
    {
        age=n;    
    }
    int getValue()
    {
        return age;
    }
};

int main()
{
    person p1;//object created
    p1.setvalue(10);//set age using setter 
    cout<<p1.getValue()<<endl;    //get age using getter
}