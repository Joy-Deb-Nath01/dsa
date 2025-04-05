#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        int c=a+b;
        if((c/2)%2==0)
        {
            cout<<"ALICE"<<endl;
            
        }
        else cout<<"BOB"<<endl;
    }
}