#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int dis = abs(a - b);
        cout << ceil(dis / (c * 1.0)) << endl;
    }
}