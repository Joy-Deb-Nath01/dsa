#include <bits/stdc++.h>
using namespace std;

int main() {
    	// your code goes here
        int a,b,c;
        cin>>a>>b>>c;
        int runcanbetaken=(20-b)*6*6;
        int remainrun=a-c;
        if(runcanbetaken>remainrun)
        cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        
}
