#include<bits/stdc++.h>
using namespace std;
 
const int infito = 2147483647;
int main() {
    int n;
    cin >> n;
    int h[100005], s[100005];
    long long ans;
	int i;
	for (i = 2; i <= n; ++i) {
        cin >> h[i];
    }
	for (i = 1; i <= n; ++i) {
        cin >> s[i]; 
        if(s[i] == -1) {
            s[i] = infito;
        }
    }
	for (i = 1; i <= n; ++i) {
        s[h[i]] = min(s[h[i]], s[i]);
    }
    for (i = 1; i <= n; ++i) {
		if(s[i] < s[h[i]]) {
            cout << -1 << "\n"; 
            return 0;
        }
		else if(s[i] == infito) {
            s[i] = s[h[i]];
        }
		ans += s[i] - s[h[i]];
	}
	cout << ans << "\n";
}