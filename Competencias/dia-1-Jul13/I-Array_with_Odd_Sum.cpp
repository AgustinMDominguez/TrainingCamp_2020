#include <bits/stdc++.h>
using namespace std;
 
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, a, counter;
    cin >> t;
    for (unsigned int i=0; i<t; ++i) {
        cin >> n;
        counter = 0;
        for (unsigned int j = 0; j<n; ++j) {
            cin >> a;
            if (a%2 != 0)++counter;
        }
        
        if (counter%2 != 0) { cout << "YES\n"; }
        else if (counter%2 == 0) {
            if (n > counter && counter > 0) { cout << "YES\n"; }
            else { cout << "NO\n"; }
        }
    }
}