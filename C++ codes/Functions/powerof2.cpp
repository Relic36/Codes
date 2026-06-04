#include <iostream>
#include <cmath>
using namespace std;

int poweris(int n){
    int x;
    for (int i = 1; i <= n/2; i++){
        x = pow(2, i);
        if (x == n && x <= n){
            cout << n << " is a power of 2." << endl;
            return 0;
        }
    }
        cout << n << " is not a power of 2." << endl;   
        return 1;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    poweris(n);
}