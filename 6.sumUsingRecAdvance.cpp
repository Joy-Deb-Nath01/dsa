#include <iostream>
using namespace std;

int sum(int n)
{   
    if(n==0)return 0;//!In int function return must have value and in
                         //!void function return means stop recursive call.it can have no value
    return n+sum(n-1);    
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
}