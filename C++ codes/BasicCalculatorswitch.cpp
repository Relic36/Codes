#include <iostream>
using namespace std;
int main(){
float x,y;
char op;
cin>>x;
cin>>op;
cin>>y;
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