#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,a,b,c;
        cin>>w>>a>>b>>c;
        if(a==w || b==w || c==w)
        cout<<"yes"<<endl;
        else if(a+b==w|| b+c==w || a+c==w || a+b+c==w)
        cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}