#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int n, m, d;
	cin >> n >> m >> d;
	int elements[n*m];
	for (int i = 0; i<n*m ; ++i){
		cin >> elements[i];
	}
 
	sort(elements, elements+(n*m));
	int half = n*m/2;
 
	int moves = 0;
	for (int i = 0; i < n*m; ++i) {
		if ((abs(elements[half] - elements[i]) %d) != 0 ){
			cout << -1 << "\n";
			return EXIT_SUCCESS;
		}
 
		else {
			moves+= abs(elements[i] - elements[half]) / d;
		}
	}
	cout << moves << "\n";
}