#include <bits/stdc++.h>
using namespace std;
 
#define DBG(x) cout << #x << " = " << (x) << "\n"
#define END(e) {cout << (e) << "\n"; return EXIT_SUCCESS;}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    const int MOD = 1e9 + 7;
    int startInd, ind, contadorB=0, contadorP=0;
    string s;

    cin >> s;
    startInd = (int)s.find_first_not_of('b'); //indice de la primera a
    ind = (int)s.find_last_not_of('a'); //indice de la ultima b
    while(ind>=startInd)  {
        if(s[ind]=='b') {
            contadorB = (contadorB+1)%MOD;
        } else {
            contadorP = (contadorP+contadorB)%MOD;
            contadorB = (contadorB*2)%MOD;
        }
        --ind;
    }
    cout << contadorP << "\n";
}