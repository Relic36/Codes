#include <iostream>
using namespace std;
int main(){
    float l,b;
    cout<< "Enter length of rectangle :";
    cin>>l;
    cout<< "Enter breadth of rectange :";
    cin>>b;
    float area;
    area = l*b;
    float perimeter;
    perimeter = 2*(l+b);
    if (area>perimeter){
       cout<< "Area is greater than perimeter"<<endl;
    }
    else {cout<< "Area is smaller than perimeter"<<endl;}
       cout<< "The area fo rectangle is: "<<area<<endl;
       cout<< "The perimeter of rectangle is: "<<perimeter;
}