#include <iostream>
using namespace std;

int main() {
    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        if (N < 2)
            cout << 0 << "\n";
        else
            cout << (N - 2) / 7 + 1 << "\n";
    }
    return 0;
}
