#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int x,y,z;
        cin>>x >>y >>z ;

        int a=y/x;
        if(a>z)
        cout<<0;
        else cout<<z-a;
        
    }
}