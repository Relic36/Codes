#include <iostream>
#include <cmath>
using namespace std;

int powerOf2(int n){
	if (n <= 0) return 0;
	return ( (n & (n - 1)) == 0 );
}

int main(){
	int n;
	if(!(cin >> n)) return 0;
	if(powerOf2(n))
		cout << n << " is a power of 2" << endl;
	else
		cout << n << " is not a power of 2" << endl;
	return 0;
}