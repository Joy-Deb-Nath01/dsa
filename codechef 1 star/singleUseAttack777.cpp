#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        //health after power attack(remHealth)
        int remHealth=a-c;
        cout<<ceil(remHealth/(b*1.0))+1<<endl;
    }
}