#include<bits/stdc++.h>
using namespace std;
void pattern1(int n)
{
    int space=(n-1)*2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        space-=2;
    }
}
int main()
{
    int n;
    cout<<"Enter how many row:";
    cin>>n;
    pattern1(n);

}
