#include <bits/stdc++.h>
using namespace std;
 
#define DBG(x) cout << #x << " = " << (x) << "\n"
#define END(e) {cout << (e) << "\n"; return EXIT_SUCCESS;}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m, rta=0, aux;
    cin >> n >> m;
    if(m%n!=0)END(-1)
    aux = m/n; 
    while(aux%3==0){
        aux /= 3;
        ++rta;
    }
    while(aux%2==0){
        aux /= 2;
        ++rta;
    }
    if(aux!=1)END(-1)
    END(rta)
}