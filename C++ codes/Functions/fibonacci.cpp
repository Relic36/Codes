#include <iostream>
using namespace std;

int fibonacci(int n){
    cout << "The Fibonacci series is: ";
    int a = 0, b = 1, c;
    for (int i = 1; i <= n; i++){
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

int main (){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    fibonacci(n);
    return 0;
}