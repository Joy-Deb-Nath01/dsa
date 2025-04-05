#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int num;
        cin>>num;
        string s;
        cin>>s;
        for(char ch:s)
        {
            
            if(ch=='A')cout<<"T";
            if(ch=='T')cout<<"A";
            if(ch=='G')cout<<"C";
            if(ch=='C')cout<<"G";
            
        }
    }
}
//2nd solution
// #include <iostream>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;
    
//     for (int t = 0; t < T; t++) {  // Loop for test cases
//         int N;
//         cin >> N;
//         string S;
//         cin >> S;
        
//         for (int i = 0; i < N; i++) {  // Loop for processing the DNA sequence
//             if (S[i] == 'A') cout << 'T';
//             else if (S[i] == 'T') cout << 'A';
//             else if (S[i] == 'C') cout << 'G';
//             else if (S[i] == 'G') cout << 'C';
//         }
//         cout << endl;
//     }
    
//     return 0;
// }
