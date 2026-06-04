#include <iostream>
#include <cmath>
using namespace std;

int bintodec(int n){
    int rem, dec = 0, i = 0;
    for (i = 0; n > 0; i++){
        rem = n % 10;
       dec = dec + rem * pow(2, i); 
       n = n / 10;
        
    }
    return dec;
}

int main (){
    int n;
    cout << "Enter a binary number: ";
    cin >> n;
    cout << "The decimal representation is: " << bintodec(n);
    return 0;
}