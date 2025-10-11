#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if ((n%5==0 or n%3==0) and (n%15!=0))
    cout<<"Number is divisible by 3 or 5 but not by 15";
    {if((n%5==0 or n%3==0) and (n%15==0)) 
       { cout<<"This number is also divisble by 15";
       }
         if(n%5!=0 and n%3!=0) cout<<"Number isn't divisible by 3 or 5 or 15";
    }
}