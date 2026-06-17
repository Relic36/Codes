#include <iostream>
using namespace std;

int swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    return 0;
}

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    
    swap(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}