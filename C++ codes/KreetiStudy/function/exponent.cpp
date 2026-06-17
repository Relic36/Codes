#include <iostream>
using namespace std;

int power(int base, int exponent = 2) {
    int result = 1;
    for (int i =1; i <= exponent; i++){
        result = result * base;
    }
    cout << base << " raised to the power of " << exponent << " is: " << result << endl;
    return result;
}


int main(){
    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    power(base);
    power(base, exponent);
    return 0;
    }
