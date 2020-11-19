#include <bits/stdc++.h>
using namespace std;
 
#define DBG(x) cout << #x << " = " << (x) << "\n"
#define END(e) {cout << (e) << "\n"; return EXIT_SUCCESS;}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, aux, offset;
    cin >> n;
    --n;
    int configInicial[n], configFinal[n];
    for(int i=0; i<n; ++i) {
        cin >> configInicial[i];
        if(configInicial[i]==0)--i;
    }
 
    for(int i=0; i<n; ++i) {
        cin >> configFinal[i];
        if(configFinal[i]==0)--i;
    }
 
    aux = configInicial[0];
    for(offset=0; offset<n; ++offset) {
        if(configFinal[offset]==aux)break;
    }
 
    for(int i=1; i<n; ++i) {
        if(configInicial[i]!=configFinal[(i+offset)%n])END("NO")
    }
    END("YES")
}