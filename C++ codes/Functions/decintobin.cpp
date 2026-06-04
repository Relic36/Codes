#include <iostream>
using namespace std;
int decintbin(int n){
    int binary[64];
    int i = 0;
    while (n > 0){
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--){
        cout << binary[j];
    }
    return 0;
}


int main (){
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    cout << "The binary representation is: ";
    decintbin(n);

}