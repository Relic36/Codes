#include <iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<< "Enter first side of triangle: ";
    cin>>a;
    cout<< "Enter second side of triangle: ";
    cin>>b;
    cout<< "Enter third side of triangle: ";
    cin>>c;
    if (a+b>c && a+c>b && b+c>a) 
    cout<< "This will form a triangle";
    else cout<< "This will not form a triangle";
}