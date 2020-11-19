#include <bits/stdc++.h>
using namespace std;
 
#define DBG(x) cout << #x << " = " << (x) << "\n"
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, max=0, ret, aux, j;
    cin >> n;
    ret = 2147483647;
    for(int i=1; i<=n; ++i){
        if (n%i==0) {
            j = n/i;
            aux = (i+j)*2;
            ret = min(ret, aux);
        }
    }
    cout << ret << "\n";
}