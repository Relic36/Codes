#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter percentage of student: ";
    cin>>n;
    if(n<=100 and n>80){
    cout<<"Very good";
    }
    else if (n>60){
    cout<<"Good";
    }
    else if (n>40){
    cout<<"Average";
    }
    else{
         cout<<"Fail";
    }
}