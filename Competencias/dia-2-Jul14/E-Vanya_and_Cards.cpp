#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, x, aux, rta, suma = 0;
    cin >> n >> x;
    for (int i=0; i<n;i++){
        cin >> aux;
        suma+=aux;
    }
    suma = abs(suma);
 
    rta=suma/x;
    suma = suma%x;
    if(suma!=0)rta++;
    cout << rta << "\n";
}