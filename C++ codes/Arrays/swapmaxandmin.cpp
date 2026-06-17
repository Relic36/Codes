#include <iostream>
using namespace std;

void swapmaxandmin(int arr[], int n) {
    int max_index = 0;
    int min_index = 0;
    
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[max_index]){
            max_index = i;
        }
        if(arr[i] < arr[min_index]){
            min_index = i;
        }
    }
    
    int temp = arr[max_index];
    arr[max_index] = arr[min_index];
    arr[min_index] = temp;
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
    
    swapmaxandmin(arr, n);
    
    cout << "Array after swapping max and min: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}