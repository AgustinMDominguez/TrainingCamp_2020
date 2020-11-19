#include <bits/stdc++.h>
using namespace std;

#define DBG(x) cout << #x << " = " << (x) << "\n"

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int cycles, n, subarr, aux;
    cin >> cycles;
    for (unsigned int i=0; i<cycles; ++i) {
        set <int> a;
        cin >> n >> subarr;
        for (unsigned int i = 0; i<n; ++i) { 
            cin >> aux;
            a.insert(aux);
        }

        if (a.size()>subarr)cout << -1 << "\n";
        else {
            cout << n*subarr << "\n";
            int ans[subarr];
            aux=0;
            for(set<int>::iterator it=a.begin(); it!=a.end(); ++it) {
                ans[aux] = *it;
                ++aux;
            }
            for (; aux<subarr; ++aux)ans[aux] = 1;
            for (aux=0; aux<n; ++aux) {
                for (unsigned int j=0; j<subarr; ++j) {
                    cout << ans[j] << " ";
                }
            }
            cout << "\n";
        }
    }
}