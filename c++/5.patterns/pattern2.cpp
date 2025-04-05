#include <bits/stdc++.h>
using namespace std;
void pattern2(int m,int n)
{
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern3(int n)

{
    {
    for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
}

}
void pattern4(int n)
{
        
    for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=(n-i+1);j++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}

void pattern5(int n)
{
    for(int i=0;i<n;i++)
    {
        //space
        for(int j=1;j<=(n-i-1);j++)
        {
            cout<<" ";
        }
        //star
        for(int j=1;j<=(i*2+1);j++)
        {
            cout<<"*";
        }
        //space
        for(int j=0;j<=(n-i-1);j++)
        {
            cout<<" ";
        }
        cout<<endl;

    }
}
void pattern6(int n)
{
    for(int i=0;i<n;i++)
    {
        //space
        for(int j=0;j<(i);j++)
        {
            cout<<" ";
        }
        //star
        for(int j=0;j<(2*n-(2*i+1));j++)
        {
            cout<<"*";
        }
        //space
        for(int j=0;j<(i);j++)
        {
            cout<<" ";
        }
        cout<<endl;

    }
}
int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
     int m,n;
    cout<<"Enter how many row:";
    cin>>n;
    // cout<<"Enter how many col:";
    // cin>>n;
    pattern6(n);
   }
    
}