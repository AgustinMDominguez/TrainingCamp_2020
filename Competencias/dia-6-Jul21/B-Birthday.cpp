#include <bits/stdc++.h> 
using namespace std; 
  
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for (unsigned int i = 0; i<n; ++i) cin >> a[i];
    sort(a, a+n);

    for (int i=0; i<n; i+=2)cout << a[i] << " ";
    
    if (n%2 == 0) {
        for (int i=n-1; i>0; i-=2) cout << a[i] << " ";
    } else {
        for (int i=n-2; i>0; i-=2) cout << a[i] << " ";
    }
}