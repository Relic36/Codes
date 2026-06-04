#include <iostream>
using namespace std;

int factorial(int x){
    int fact = 1;
    for (int i = 1; i <= x; i++){
        fact = fact * i;
    }
    return fact;
}

int combination(int n, int r){
    int comb = factorial(n) / (factorial(r) * factorial(n - r));
    return comb;
}

int main (){
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;
    cout << "The value of nCr is: " << combination(n, r);
    return 0;
}