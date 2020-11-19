#include <bits/stdc++.h>
using namespace std;
 
void aux(int a, int b) {
    if (a == b) { cout << 0 << "\n"; }
    else if (a < b) {
        if (a%2 == 0) {
            if (b%2 != 0) { cout << 1 << "\n"; } //a-par b-impar
            else { cout << 2 << "\n"; }          //a-par b-par
        }
        else {
            if (b%2 == 0) { cout << 1 << "\n"; } //a-impar b-par
            else { cout << 2 << "\n"; }          //a-impar b-impar
        }
    }
    else {
        if (a%2 == 0) {
            if (b%2 != 0) { cout << 2 << "\n"; } //a-par b-impar
            else { cout << 1 << "\n"; }          //a-par b-par
        }
        else { 
            if (b%2 == 0) { cout << 2 << "\n"; } //a-impar b-par  
            else { cout << 1 << "\n"; }          //a-impar b-impar
        }
    }
}
 
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, a, b;
    cin >> t;
    for (unsigned int i = 0; i<t; ++i) {
        cin >> a >> b;
        aux(a, b);
    }
}