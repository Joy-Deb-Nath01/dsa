#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int x,y;
        cin>>x>>y;
        int a=y-x;
        cout<<ceil(a/8.0)<<endl;
    }
}