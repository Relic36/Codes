#include <iostream>
using namespace std;
int main(){
    int n = 4;
    for (int i= 1; i <= n; i++){
        for (int j = n; j > i; j--){
            cout << " ";
        }
        cout << "*";
        for (int k = 1; k < 2*i-2; k++){
            cout << " ";
        }
        if (i > 1){
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = n-1; i >= 1; i--){
        for (int j = n; j > i; j--){
            cout << " ";
        }
        cout << "*";
        for (int k = 1; k < 2*i-2; k++){
            cout << " ";
        }
        if (i > 1){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}