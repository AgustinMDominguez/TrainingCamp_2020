#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int n;
	cin >> n;
    int cards[n];
	for(int i=0; i<n; i++) cin >> cards[i];

    int sereja=0, dima=0, aux1=0, aux2 = n-1;
    
	for(int i=1;i<=n;i++){
		if(i&1) {
			if (cards[aux1] > cards[aux2]) sereja += cards[aux1],aux1++;
			else sereja += cards[aux2],aux2--; "\n";
        }
		else {
			if (cards[aux1] > cards[aux2]) dima += cards[aux1],aux1++;
			else dima += cards[aux2],aux2--;
		}
	}
    cout << sereja << " " << dima << "\n";
}