#include <iostream>
using namespace std;

int sum(int arr[],  int n){
    int sum = 0;
    for (int i = 0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int product(int arr[], int n){
    int product = 1;
    for (int i = 0; i<n; i++){
        product = product * arr[i];
    }
    return product;
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
    int sum_result = sum(arr, n);
    int product_result = product(arr, n);
    cout << "The sum of the elements is: " << sum_result << endl;
    cout << "The product of the elements is: " << product_result << endl;
    return 0;
}