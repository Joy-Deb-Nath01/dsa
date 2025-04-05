#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        
        if(b+c+d<=a)
        cout<<0<<endl;
        else if(b+c+d>a)
        {
            int sum=b+c+d;
            sum=sum-max(b,c);
            if(sum<=a)
            {
                cout<<1<<endl;
            }
            else cout<<"2"<<endl;
        }

    }

    return 0;
}
//gpt solution
// #include <iostream>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int S, X, Y, Z;
//         cin >> S >> X >> Y >> Z;
        
//         int freeSpace = S - (X + Y);
        
//         if (freeSpace >= Z) {
//             cout << 0 << endl;
//         } else if ((freeSpace + X) >= Z || (freeSpace + Y) >= Z) {
//             cout << 1 << endl;
//         } else {
//             cout << 2 << endl;
//         }
//     }
//     return 0;
// }
