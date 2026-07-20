#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    bool newWord = true;
    for (char &ch : str) {
        unsigned char current = static_cast<unsigned char>(ch);
        if (isspace(current)) {
            newWord = true;
        } else if (newWord) {
            ch = toupper(current);
            newWord = false;
        } else {
            ch = tolower(current);
        }
    }

    cout << "Capitalized string: " << str << endl;
    return 0;
}