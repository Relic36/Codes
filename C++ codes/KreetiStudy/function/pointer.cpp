#include <iostream>
using namespace std;

int main(){
    int  a = 10;     // variable declaration = 10
    int* h = &a;   // container = adress of a 
    cout << h << endl;
    cout << *h << endl;
    int **p = &h;  // pointer to pointer
    cout << p << endl; 
    cout << *p << endl;
    cout << **p << endl;
    return 0;
}