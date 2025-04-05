#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int even=0;
        int odd=0;
        for(int i=1;i<=n;i++)
        {
        if(i%2==0)
        {
            even++;
        }
        else odd++;
        
        }   
        cout<<a*even+b*odd<<endl;
        
    }
}
//gpt solution
/*#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;

        int odd_count = (N + 1) / 2;  // Count of odd-indexed episodes
        int even_count = N / 2;       // Count of even-indexed episodes

        int total_duration = odd_count * B + even_count * A;
        cout << total_duration << endl;
    }

    return 0;
}
*/
