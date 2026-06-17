#include <iostream>
using namespace std;

int arearec(int length, int breadth) {
    return length * breadth;
}

int areasq(int side) {
    return side * side;
}

float areacirc(int radius) {
    return 3.14 * radius * radius;
}

int main(){
    int length, breadth, side, radius;
    
    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of rectangle: " << arearec(length, breadth) << endl;
    
    cout << "Enter side of the square: ";
    cin >> side;
    cout << "Area of square: " << areasq(side) << endl;
    
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of circle: " << areacirc(radius) << endl;
    
    return 0;

}