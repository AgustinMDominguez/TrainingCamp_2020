#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, s, min;
    cin >> a >> b >> s;
    min = abs(a) + abs(b);
    s -= min;
    if (s%2==0 && s>=0) {
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
    }
}