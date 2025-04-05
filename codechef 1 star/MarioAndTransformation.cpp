#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter how many case:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cout<<"enter how many mushrooms:";
        cin>>a;
        if(a%3==0)
        cout<<"NORMAL"<<endl;
        else if(a%3==1)
        cout<<"HUGE"<<endl;
        else cout<<"SMALL"<<endl;

    }

}