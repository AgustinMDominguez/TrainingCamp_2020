#include <bits/stdc++.h> 
using namespace std; 
  
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, a, b;
    cin >> t;
    for (unsigned int i=0; i<t; ++i) {
        cin >> a >> b;
        cout << (floor(sqrt(b)) - ceil(sqrt(a)) + 1) << "\n";
    } 
} 