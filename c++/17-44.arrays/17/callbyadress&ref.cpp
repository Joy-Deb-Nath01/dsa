#include<iostream>
using namespace std;
int check(int x)//only the copy is been used.if you want to change the origianl value use &(call by reference)
{                   //uou used call by value
    x=10;
    return x;
}

int main()
{
    int x=5;
    cout<<check(x)<<endl;
    cout<<x<<endl;

}