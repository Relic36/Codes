#include <iostream>
#include <vector>
using namespace std;
int makeconsecutive(vector<int> &vec, int n){
    for (int i=0; i < n; i++){
        for (int j=0; j < n; j++){
            if( vec [i]<= vec[j]){
                swap(vec[i], vec[j]);
            }
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

    makeconsecutive(vec, n);

    cout << "Consecutive vector: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}