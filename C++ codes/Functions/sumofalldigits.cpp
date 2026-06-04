#include <iostream>
using namespace std;

int sum(int n){
    int sum = 0;
    while ( n > 0){
        sum  = sum + n%10;
        n = n/10;
    }
    return sum;
}

int main (){
    cout << "Enter a number: ";
    int n;
    cin >> n;
    cout << "The sum of all digits is: " << sum(n);
    return 0;
}