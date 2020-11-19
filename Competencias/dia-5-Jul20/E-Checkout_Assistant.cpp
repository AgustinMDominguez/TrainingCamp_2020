#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, t, c;
    cin >> n;
    long long a[n+2];
    a[0] = 0;
    for (int i = 1; i<(n + 2); ++i) a[i] = 1e18; /*infinto*/
    for (int i = 0; i < n; ++i) {
        cin >> t >> c;
        for (int j=n; j>0 ; --j) {
            a[j] = min(a[j], a[max(0, j - t - 1)] + c);
        }
    }
    cout << a[n] << "\n";
}