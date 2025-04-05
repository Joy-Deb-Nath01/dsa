#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int c=abs(a-b);
        if(a==b)
        cout<<"yes"<<endl;
        else if(a>b && c<=y)
        cout<<"yes"<<endl;
        else if(a<b && c<=x)
        cout<<"yes"<<endl;
        
        else cout<<"no"<<endl;      
    }
}

 
