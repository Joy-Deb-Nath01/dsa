#include <iostream>
using namespace std;
int total=0;
void sum(int n)
{
     if(n==0)return;
    sum(n-1);
    total=total+n;
   //! cout<<total<<endl; move this line in main function after function call
   //else you will unintentionally print total every time;
}
int main()
{
    int n;
    cin>>n;
    sum(n);
    cout<<total<<endl;
}