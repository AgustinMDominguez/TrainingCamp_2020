#include <bits/stdc++.h>
using namespace std;
 
#define DBG(x) cout << #x << " = " << (x) << "\n"
 
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int *mtx[2];
    ll *tabla[3];

    cin >> n;
    for(int i=0; i<2; ++i) {
        mtx[i] = new int[n];
        for(int j=0; j<n; ++j)cin >> mtx[i][j];
    }

    tabla[0] = new ll[n];
    tabla[0][n-1] = 0ll;

    for(int i=1; i<3; ++i) {
        tabla[i] = new ll[n];
        tabla[i][n-1] = (ll)mtx[i-1][n-1];
    }

    for (int columna=n-2; columna>=0; --columna) {
        tabla[0][columna] = max(tabla[1][columna+1], tabla[2][columna+1]);
        tabla[1][columna] = max(tabla[0][columna+1], tabla[2][columna+1]) + (ll)mtx[0][columna];
        tabla[2][columna] = max(tabla[1][columna+1], tabla[0][columna+1]) + (ll)mtx[1][columna];
    }
    cout << max({tabla[0][0], tabla[1][0], tabla[2][0]}) << "\n";
}
 
/*
Tenemos un arreglo con las opciones fila=0,1,2  (0 representa no elegir ninguno de esa fila)
 
foo(fila, columna)::
    arr[fila, columna]          si columa=n-1 (osea la ultima)
 
    max( foo(a, col+1), foo(b, col+1) )    con filas a, b que pertenecen a 
                                           {0,1,2} AND fila!=b AND fila!=b
*/
