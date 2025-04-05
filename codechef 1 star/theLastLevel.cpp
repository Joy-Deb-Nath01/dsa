#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int tt=x*y;
        int b=(x-1)/3;
        tt=tt+b*z;
        cout<<tt<<endl;

    }
}