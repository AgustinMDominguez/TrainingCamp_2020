#include <bits/stdc++.h>
using namespace std;
 
#define DBG(x) cout << #x << “ = ” << (x) << "\n"
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, j=19, n;
	cin >> a;
	cout << 39 << "\n";
	while(j>0){
		n = log2(a) + 1;
		a ^= (int)(pow(2,n)-1); /*operacion A*/
		++a; /*operacion B*/
		cout << n << " ";
        --j;
	}
	cout<< log2(a) + 1 << "\n";
}