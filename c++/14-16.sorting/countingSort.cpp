#include <iostream>
using namespace std;

void countingSort(int arr[], int n) {
    // 1️⃣ Find the largest number
    int maxVal = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];  // Store the largest number
        }
    }

    // 2️⃣ Create a count array (size = maxVal + 1) and initialize to 0
    int count[maxVal + 1] = {0};

    // 3️⃣ Count how many times each number appears
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;  // Increase count of that number
    }

    // 4️⃣ Put the numbers in sorted order
    int index = 0;
    for (int i = 0; i <= maxVal; i++) {
        while (count[i] > 0) {  // If this number appears
            arr[index] = i;  // Place it in sorted array
            index++;  // Move to the next position
            count[i]--;  // Decrease the count
        }
    }
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    countingSort(arr, n);  // Call the function

    // Print sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
