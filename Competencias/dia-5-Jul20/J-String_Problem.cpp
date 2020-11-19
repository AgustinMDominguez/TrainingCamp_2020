#include<bits/stdc++.h>
using namespace std;
 
int main() {
	ios:: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //int C = 30;
    int n, costos[30][30], respuesta=0;
    string s, t;
    cin >> s >> t >> n;
	memset(costos, 63, sizeof costos);
	for (int i = 0; i < 30; i++)
		costos[i][i] = 0; /*diagonal principal en 0's*/
	for (int i = 0; i < n; i++) {
		int w;
		char a, b;
		cin >> a >> b >> w;
		costos[a - 'a'][b - 'a'] = min(costos[a - 'a'][b - 'a'], w);
	}
 
	if (s.size() != t.size()) {
		cout << -1 << "\n";
		return EXIT_SUCCESS;
	}
	for (int c = 0; c < 30; c++)
		for (int a = 0; a < 30; a++)
			for (int b = 0; b < 30; b++)
				costos[a][b] = min(costos[a][b], costos[a][c] + costos[c][b]);
	for (int i = 0; i < s.size(); i++) {
		int minimo = 1e9, ch = -1;
		for (int j = 0; j < 30; j++)
			if (costos[s[i] - 'a'][j] + costos[t[i] - 'a'][j] < minimo) {
                ch = j;
				minimo = costos[s[i] - 'a'][ch] + costos[t[i] - 'a'][j];
                /*cout << "\nminimo: " << minimo << "\n";*/
            }
		if (!~ch) {
			cout << -1 << "\n";
			return EXIT_SUCCESS;
		}
		respuesta += minimo;
        s[i] = t[i] = ch + 'a';
	}
	cout << respuesta << "\n" << s << "\n";
}