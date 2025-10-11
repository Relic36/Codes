#include <iostream>
using namespace std;
int main(){
    float cp,sp;
    cout<< "Enter the cost price of the item :";
    cin>>cp;
    cout<< "Enter the selling price of item :";
    cin>>sp;
    if (sp>cp) {cout<< "Seller is making a profit of :"<<endl;
        cout << sp-cp;
    }
    if (sp<cp) {cout<< "Seller is making a loss of :"<<endl;
        cout << cp-sp; 
    }
    if (cp==sp) cout<< "No profit or loss made";
}