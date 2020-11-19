#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int n;
	string s;
	cin >> n >> s;
	if (n < 27) {
		set<char> repeats;
		for (int i = 0; i < n; i++) {
            repeats.insert(s[i]);
        }
		cout << n - repeats.size() << "\n";
	}
	else
		cout << -1 << "\n";
}