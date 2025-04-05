#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int A,X,B,Y;
	    cin>>A>>X>>B>>Y;
	    float velAlice=A/(X*1.0);
	    float velBob=B/(Y*1.0);
	    if(velAlice>velBob)
	    cout<<"ALICE"<<endl;
	    else if(velAlice<velBob)
	    cout<<"BOB"<<endl;
	    else cout<<"Equal"<<endl;
	}

}

//gpt solution
/*#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int A, X, B, Y;
        cin >> A >> X >> B >> Y;  // Read distances and times

        // Compare speeds using integer multiplication
        if (A * Y > B * X) {
            cout << "ALICE" << endl;
        } 
        else if (A * Y < B * X) {
            cout << "BOB" << endl;
        } 
        else {
            cout << "EQUAL" << endl;
        }
    }

    return 0;
}
*/