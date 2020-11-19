#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int points=0, counter=1, n;
	cin>>n;
    pair<int ,int>cards[n];
	for(int i=0; i<n; ++i)
		cin >> cards[i].second >> cards[i].first;
	sort(cards, cards+n);
	for(int i=n-1; i>= 0 && counter>0; --i){
		points += cards[i].second;
		counter += cards[i].first-1;
	}
	cout << points << "\n";
}