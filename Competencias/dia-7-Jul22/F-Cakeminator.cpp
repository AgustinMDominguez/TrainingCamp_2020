#include <bits/stdc++.h>
using namespace std;
 
int r, c, res;
string s[10];
bool filas[11], columnas[11];
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	cin >> r >> c;
	for (int i = 0; i < r; i++) 
		cin >> s[i];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (s[i][j] == 'S') {
				filas[i] = columnas[j] = 1;
            }
        }
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (!filas[i] || !columnas[j]) {
				res++;
            }
        }
    }
	cout << res << "\n";
}