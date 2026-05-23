#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Ram's age: ";
    cin>>a;
    cout<<"Enter Shyam's age: ";
    cin>>b;
    cout<<"Enter Ajay's age: ";
    cin>>c;
    if(a<b){
        if(a<c)
        cout<<"Ram is youngest among all";
        else cout<<"Ajay is youngest among all";
    
            }
    if(b<a) {
        if(b<c)
        cout<<"Shyam is youngest among all";
        else cout<<"Ajay is youngest among all";
    }    

}