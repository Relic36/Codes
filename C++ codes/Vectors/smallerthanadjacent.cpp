#include <iostream>
#include <vector>
using namespace std;

int smaller(vector<int> &vec, int n){
    for (int i=0; i < n; i++){
        if ( vec[i] < vec[i-1] && vec[i] < vec[i+1]){
            cout << vec[i] << " ";
        }
    }
}

int main(){
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements of the vector: ";
    for (int &i : vec) {
        cin >> i;
    }

    cout << "Smaller than adjacent elements: ";
    smaller(vec, n);
    cout << endl;

    return 0;
}