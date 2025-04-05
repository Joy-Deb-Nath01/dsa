#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int n,m;
        cin>>n>>m;
        if((n/m)%2==0 && n%m==0)
        cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}