#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int N,X,K;
        cin>>N>>X>>K;
        float a=K/X;
        if(ceil(a)>=N)
        {
            cout<<N<<endl;
        }
        else cout<<a<<endl;

    }
}