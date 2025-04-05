#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int x,y;
        cin>>x>>y;
        int sum=x+y;
        int sub=21-sum;
        if(sub>10)
        cout<<-1<<endl;
        else
        cout<<sub<<endl;
        
    }
}
