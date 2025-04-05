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
        int Numberearned=b*3;
        int wrongAns=a-b;
        int net=Numberearned-wrongAns;
        if(net>=c)
        cout<<"pass"<<endl;
        else cout<<"fail"<<endl;

    }
}