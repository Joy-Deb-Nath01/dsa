#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int posA=ceil(a/10.0);
        int posB=ceil(b/10.0);
        cout<<abs(posA-posB)<<endl;
        

        
    }
}