#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x%5!=0)
        cout<<-1<<endl;
        else if(x%10==0)
        {
            cout<<x/10<<endl;
        }
        else if(x%10!=0 && x%5==0)
        {
            int s=x/10;
            cout<<s+1<<endl;
        }
    }
}
//gpt solution
/*  

#include <iostream>
using namespace std;

void min_coins(int X) {
    int tens = X / 10;
    int remainder = X % 10;

    if (remainder % 5 == 0) {
        int fives = remainder / 5;
        cout << tens + fives << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    int T, X;
    cin >> T;
    while (T--) {
        cin >> X;
        min_coins(X);
    }
    return 0;
}


*/