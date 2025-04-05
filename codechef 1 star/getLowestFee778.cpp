#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,min=0;
	    cin>>a>>b>>c;
	    if(a<=b && a<=c)
	    min=a;
	    else if (b<=a && b<=c)
	    min=b;
	    else min=c;
	    cout<<(a+b+c)-min<<endl;
	    
	}
}
