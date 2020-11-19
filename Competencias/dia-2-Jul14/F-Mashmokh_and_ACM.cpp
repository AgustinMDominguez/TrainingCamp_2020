#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, L, auxs, xk, NN;
    cin >> N >> L;
    
    if(L==1) { 
        cout << N << "\n";
        return EXIT_SUCCESS;
    }

    NN = N+1;
    int ll = L-1;
    // Allocamos una matriz de tamaño [0..N-1, 0..L-2]
    int **tabla = new int*[N];
    for(int x=0; x<N; x++) {
        tabla[x] = new int[ll];
        tabla[x][0] = 1; // Caso base
    }

    // llenamos la tabla en [x][l] dejando vacia la ultima columna
    for (int l=2; l<L; l++) {
        for(int x=1; x<NN; x++){
            auxs = 0;
            xk = x;  //Como si k=1 entonces k*x=x
            while(xk<=N){
                auxs = (auxs + tabla[xk-1][l-2]) % mod;
                xk += x;
            }
            tabla[x-1][l-1] = auxs;
        }
    }
    auxs = 0;
    for(int x=1; x<NN; x++) {
        xk = x;
        while(xk<=N){
            auxs = (auxs + tabla[xk-1][L-2])%mod;
            xk += x;
        }
    }
    cout << auxs << "\n";
}

/*
Version Backtracking:
f(x,l) devuelve la cantidad de opciones al elegir x como primer elemento
       en una secuencia de l elementos.
       Asumimos x<n (cota global) y l>0
f(x,l) {
    1   si l=1
    SUM { from k=1 to k<n/x of:: f(x*k, l-1) } 
        }
*/