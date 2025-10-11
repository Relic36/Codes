#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<< "Enter first number: ";
    cin>>a;
    cout<< "Enter second number: ";
    cin>>b;
    cout<< "Enter third number: ";
    cin>>c;
    if(a>b){
        if (a>c)
        cout<<a<<" is the greatest number";
        else cout<<c<<" is the greatest number";
    }
    if (b>a){
        if (b>c)
        cout<<b<<" is the greatest number";
        else cout<<c<<" is the greatest number";
    }
    
}