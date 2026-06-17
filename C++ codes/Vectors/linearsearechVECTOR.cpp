#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int> &vec, int n){
    for (int i: vec){
        if (i == n){
            return true;
        }
    }
    return false;
}

int main(){
    int n, size;
    cout << "Enter the number of elements in the vector: ";
    cin >> size;
    vector<int> vec(size);
    cout << "Enter the elements of the vector: ";
    for (int &i : vec) {
        cin >> i;
    }

    cout << "Enter the number to search: ";
    cin >> n;

    if (search(vec, n)) {
        cout << n << " is present in the vector." << endl;
    } else {
        cout << n << " is not present in the vector." << endl;
    }

    return 0;
}
