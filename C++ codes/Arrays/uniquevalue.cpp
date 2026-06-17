#include <iostream>
using namespace std;

int printUniqueValues(int arr[], int n) {
    int uniqueCount = 0;

    for (int i = 0; i < n; i++) {
        int frequency = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                frequency++;
            }
        }

        if (frequency == 1) {
            arr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    return uniqueCount;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int uniqueCount = printUniqueValues(arr, n);
    cout << "Unique values in the array: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}