#include <iostream>
using namespace std;

void printPattern(int n) {
    // Print the top row of stars
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
    
    // Print the middle rows with spaces
    for (int i = 1; i < n - 1; i++) {
        cout << "*"; // Start with a star
        for (int j = 1; j < n - 1; j++) {
            cout << " "; // Print spaces
        }
        cout << "*"; // End with a star
        cout << endl;
    }
    
    // Print the bottom row of stars
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    int n = 5; // Size of the pattern
    printPattern(n);
    return 0;
}
