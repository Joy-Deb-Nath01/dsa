#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
        int firstcase=500-(a*2)+1000-(a+b)*4;
        int secondcase=1000-(b*4)+500-(a+b)*2;
        if(firstcase>secondcase)
        cout<<firstcase<<endl;
        else cout<<secondcase<<endl;

	    
	}

}
