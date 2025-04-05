#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int x;
        int count=0;
        for(int i=0;i<a;i++)
        {
            cin>>x;
            if((x+b)%7==0)
            count++;
        }
        cout<<count<<endl;
    }
}