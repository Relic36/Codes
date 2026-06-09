#include <iostream>
using namespace std;

int reverse (int arr[], int n){
    int temp;
    int j = n-1;
    for (int i = 0; i < n/2; i++){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j--;
        }
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
    reverse(arr, n);
    cout << "The reversed array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}