#include <iostream>
using namespace std;

int fibonacci(int n){
    cout << "The Fibonacci series is: ";
    int a = 0, b = 1, c;
    cout << a << " " << b << " ";
    for (int i = 3; i <= n; i++){
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
} 

int main (){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    
        fibonacci(n);
        cout << endl;
    
    return 0;
}