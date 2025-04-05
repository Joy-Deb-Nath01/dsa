#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int dis=max(abs(a-c),abs(b-d));
        cout<<dis<<endl;
    }
}