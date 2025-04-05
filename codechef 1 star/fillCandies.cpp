#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int d=b*c;
        cout<<ceil(a*1.0/d)<<endl;

    }
}