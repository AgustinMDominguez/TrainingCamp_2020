#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    long long f[n+1];
    f[1] = 1;
    f[2] = 3;
    for(unsigned int i = 3; i <= n; ++i) {
        f[i] = (2 + f[i-1] + f[i-2]) % 1000000007;
    }
    cout << f[n] << "\n";
    return 0;
}
