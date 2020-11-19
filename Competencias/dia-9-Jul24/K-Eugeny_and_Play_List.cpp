#include <bits/stdc++.h>
using namespace std;
 
int n, m, c, t, v, cancion, tiempo;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    int playlist[n+5];
    playlist[0] = 0;
    for (int i=1; i<=n; ++i) {
        cin >> c >> t;
        playlist[i] = c*t;
    }
    for (int i=0; i<m; ++i) {
        cin >> v;
        while (tiempo<v) {
            ++cancion;
            tiempo += playlist[cancion];
        }
        cout << cancion << "\n";
    }
}