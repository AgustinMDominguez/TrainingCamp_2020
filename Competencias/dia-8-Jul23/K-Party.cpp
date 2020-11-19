#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int n;
    for (int i=0; i<t; ++i) {
        cin>>n;
        if (n==1) cout << 0 << "\n";
        else cout<< n-2 << "\n";
    }
}