#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count=0;
        for(int i=0;i<n;i++)
        {
            int age;
            cin>>age;
            if(age<=60 && age>=10)
            count++;
        }
        cout<<count<<endl;
    }
}