#include <iostream>
using namespace std;

int prime(int n){
    int flag = 0;
    if (n <= 1){
        return 0;
    }
    for (int i = 2; i <= n/2; i++){
        if (n % i == 0){
            flag = 1;
            break;
        }
    }
    if (flag == 0){
        cout << n << " is a prime number.";
    }
    else{
        cout << n << " is a composite number.";
    }
}

int main (){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    prime(n);
    return 0;
}