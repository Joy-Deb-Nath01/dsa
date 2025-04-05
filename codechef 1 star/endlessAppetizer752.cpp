#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int extra=c/30;
        int total=extra+a;
        cout<<ceil(total/(b*1.0))<<endl;
    }
}