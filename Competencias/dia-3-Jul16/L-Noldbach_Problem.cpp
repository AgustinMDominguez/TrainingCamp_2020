#include <bits/stdc++.h>
using namespace std;
 
#define DBG(x) cout << #x << " = " << (x) << "\n"
 
bool isPrime(int m) {
    bool result = true;
    int i=2;
    while (i <= m / 2){
        if (m % i == 0) {
            result=false;
            i=m; 
        }
        i++;
   }
   return result;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, j, contador = 2, result=0, b=0;
    cin >> n >> k;
    if (k==0) {
        cout << "YES" << "\n";
    }
    else {
        int p[n+2];
        p[0] = 2;
        p[1] = 3;
        for (int i=5; i<=n; ++i) {
            if (isPrime(i)) {
                p[contador] = i;
                contador++;
            }
        }
        for (unsigned int i = contador-1; i>1; --i) {
            j = i-1;
            while (j>0) {
                if (p[i] == p[j] + p[j-1] +1) {
                    ++result;
                    j=-1;
                }
                --j;
            }
            if (result == k) {
                b=1;
                break;
            }  
        }
        if (b) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
}