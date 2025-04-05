#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    
    {
        int x,n;
        cin>>x>>n;
        int totalcap=x*100;
        if(totalcap>=n)
        cout<<0<<endl;
        else {
            int a=ceil((n-(x*100))/100.0);
            cout<<a<<endl;
        }
    }
}
//gpt solution
/*
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, N;
        cin >> X >> N;
        
        int required_planes = (N + 99) / 100;  // Equivalent to ceil(N / 100)
        cout << max(0, required_planes - X) << endl;
    }
    return 0;
}

*/