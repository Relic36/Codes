#include <iostream>
#include <vector>
using namespace std;

void reverse(vector <int> &vec, int size){
    int j = size - 1;
    for ( int i = 0 ; i <= size/2 ; i++){
        swap(vec[i], vec[j]);
        j--;
    }
}

int main(){
    int size;
    cout << "Enter the number of elements in the vector: ";
    cin >> size;
    vector<int> vec(size);
    cout << "Enter the elements of the vector: ";
    for (int &i : vec) {
        cin >> i;
    }

    reverse(vec, size);

    cout << "Reversed vector: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}