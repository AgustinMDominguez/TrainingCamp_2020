#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long W[1001][1001], N, M, K, partial_solution, X=1000000007;
    for(unsigned int i=0; i<1001; ++i) {
        W[i][0] = 1; /*primera columna con 1's*/
        W[0][i] = 0; /*primera fila    con 0's*/
    }

    for(unsigned int j = 1; j<1001; ++j){
    	partial_solution = 0;
        for (unsigned int i = 3; i<1001; ++i) {
            partial_solution = ((partial_solution + W[i-2][j-1]) % X);
            W[i][j] = (partial_solution + W[i-1][j]) % X;
        }
    }
    cin >> N >> M >> K;
    cout << (W[N][K]*W[M][K])%X << "\n"; /*W[K][N]*/
}