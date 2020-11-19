#include <iostream>
using namespace std;

int main () {
    char c;
    while (true) {
        cin.get(c);
        if(c=='\n') {break;}
        c = tolower(c);
        switch (c) {
        case 'a': break;
        case 'e': break;
        case 'i': break;
        case 'o': break;
        case 'u': break;
        case 'y': break;       
        default:
            cout << "." << c;
            break;
        }
    }
    cout << endl;
    return 0;
}


