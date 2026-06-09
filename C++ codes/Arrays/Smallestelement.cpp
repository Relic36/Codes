#include <iostream>
using namespace std;

int smallestelement(int arr[], int n) {
    int smallest = arr[0];
    for(int i = 1; i < n; i++){
        smallest = min(smallest, arr[i]);
    }
    return smallest;
    
}
int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int smallest = smallestelement(arr, n);
    cout << "The smallest element is: " << smallest << endl;
    return 0;
}

