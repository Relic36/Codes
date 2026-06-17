#include<iostream>
using namespace std;

int modify(int arr[],int index) {
    arr[index] = 0;
    return 0;
}
    
 

 int main(){
    int arr[] = {10,20,30,40,50};
    cout<< "Which index do you want to modify? ";
    int index;
    cin >> index;
    modify(arr, index);

    cout << "Modified array: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
 }