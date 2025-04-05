#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int a,b;
        cin>>a>>b;
        int c=a/b;
        int d=a%b;
        cout<<c+d<<endl;
    }
}