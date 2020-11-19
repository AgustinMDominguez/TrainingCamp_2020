#include<bits/stdc++.h>
using namespace std;
 
int add(int x, int y, int mod) {
    x += y;
    if (x >= mod)x -= mod;
    return x;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int mod = 998244353;
    int n, k, aux;
    cin >> n >> k;
    int board[505][505];
    board[0][0] = 1;
    for(int i = 1; i <= n; ++i) {
        for(int j = 0; j < i; ++j) {
            for(int r = 0; r <= i; ++r) {
                aux = max(r, i - j);
                board[i][aux] = add(board[i][aux], board[j][r], mod);
            }
        }
    }
 
    int result = 0;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            if (i * j < k)result = add(result, (long long)1 * board[n][i] * board[n][j] % mod, mod);
        }
    }
    result = add(result, result, mod);
    cout << result << "\n";
}