#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int i, j;
    for ( i = 1; i <= n; i++){
        for ( j = 1; j <= i; j++){
            cout   << " ";
        }
        for ( j = n; j >= i; j--){
            cout << i << " ";
        }
        cout << "\n";
    }
}