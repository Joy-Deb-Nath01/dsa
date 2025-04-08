#include <iostream>
using namespace std;
void printntimes(int n)
{
    if(n==0) return;  //*! Base case
    cout<<"hello world"<<endl; //*! work
    printntimes(n-1);   //*! recursive call
}
int main()
{
    int n;
    cin>>n;
    printntimes(n);
}