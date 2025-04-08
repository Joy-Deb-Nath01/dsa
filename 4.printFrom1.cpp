#include <iostream>
using namespace std;
void printfunc(int n)
{  //! you have to solve this with function unwinding

    if(n==0) return;
    printfunc(n-1);
    cout<<n<<" ";
    
}
int main()
{
    int n;
    cin>>n;
    printfunc(n);
}