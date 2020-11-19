#include <bits/stdc++.h>
using namespace std;
 
#define DBG(x) cout << #x << " = " << (x) << "\n"
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    for (unsigned int j=0;j<t;++j) {
        cin >> n;
        char aux;
        int a[n/2], b[n/2], bo=1;
        for (unsigned int i=0; i<n/2; ++i) {
            cin >> aux;
            a[i] = aux - '0';
        }
        for (unsigned int i=0; i<n/2; ++i) {
            cin >> aux;
            b[(n/2 - 1) - i] = aux - '0';
        }
        for (unsigned int i=0; i<n/2; ++i) {
            if (a[i]!=b[i] && abs(a[i]-b[i]) != 2)bo=0;
        }
        cout << (bo ? "YES" : "NO") << "\n"; 
    }
 
}