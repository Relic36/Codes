#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter value of x: ";
    cin>>x;
    cout<<"Enter value of y: ";
    cin>>y;
    if (x>0 and y>0){
        cout<<"Belongs to the first quadrant";
    }
    else if (x>0 and y<0){
        cout<<"Belongs to the fourth quadrant";
    }
    if (x<0 and y<0){
        cout<<"Belongs to the third quadrant";
    }
    else if (x<0 and y>0){
        cout<<"Belongs to the second quadrant";
    }
}