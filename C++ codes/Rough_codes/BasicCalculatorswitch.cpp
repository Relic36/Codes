#include <iostream>
using namespace std;
int main(){
float x,y;
char op;
cout<<"Enter first number: ";
cin>>x;
cout<<"Enter operator: ";
cin>>op;
cout<<"Enter second number: ";
cin>>y;
cout<<"Result: ";
switch(op){
    case '+':
        cout<<x+y;
        break;
    case '-':
        cout<<x-y;
        break;
    case '*':
        cout<<x*y;
        break;
    case '/':
        cout<<x/y;
        break;
    default:
    cout<<"Invalid operator";    
}
}