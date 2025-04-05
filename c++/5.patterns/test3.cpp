#include <iostream>
using namespace std;

void printPattern(int n) {
    int size = 2 * n - 1; // Determine the size of the pattern matrix

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Calculate the value to be printed
            int minDist = min(min(i, j), min(size - i - 1, size - j - 1));
            cout << (n - minDist)<<" ";
        }
        cout << endl;
    }
}

int main() {
    int n = 4; // Size of the pattern
    printPattern(n);
    return 0;
}
