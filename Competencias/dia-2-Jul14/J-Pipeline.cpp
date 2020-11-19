#include <bits/stdc++.h>
using namespace std;

/*inline unsigned long pipes(unsigned long h, const unsigned long& K) {return (K*(K+(unsigned long)1) - h*(h-(unsigned long)1))/(unsigned long)2;}*/
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k, max;
	cin >> n >> k;
    max = k*(k-1)/2 + 1;
	if (max < n) { cout << -1 << "\n"; 
    }
    else {
	    long long a = 0, b = k, mid;
	    while(a < b) {
		    mid = (a + b) / 2;
		    if(max - (mid * (mid + 1) / 2) < n) {
			    b = mid;
            }
		    else {
			    a = mid + 1;
            }
	    }
	    cout << k-a << "\n";
    }
}