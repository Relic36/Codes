#include <iostream>
#include <vector>
using namespace std;

void createMatrix(vector<int> &vec, int n){
    for(int i=0; i < n; i++){
        for (int j=0; j < n; j++){
            vec.push_back(n);
        }
    }
    cout << "The " << n << "x" << n << " matrix is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << vec[n] << " ";
        }
        cout << endl;
    }

    
}

int main(){
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;
    vector<int> vec;
    createMatrix(vec, n);
    return 0;
}