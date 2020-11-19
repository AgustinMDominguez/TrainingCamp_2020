#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int piles, g=1;
	cin >> piles;
	int number_worms, label_juicy_worms, labels[1000010];
	for(unsigned int i=0u; i<piles; i++){
		cin >> number_worms;
		for(unsigned int j=g; j<number_worms+g; j++){
			labels[j] = i+1;
		}
		g = number_worms+g;
	}
	int number_juicy_worms;
	cin >> number_juicy_worms;
	for(unsigned int i=0u; i<number_juicy_worms; i++){
		cin >> label_juicy_worms;
		cout << labels[label_juicy_worms] << "\n";	 
		}
}