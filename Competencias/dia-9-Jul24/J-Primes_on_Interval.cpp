#include <bits/stdc++.h>
using namespace std;
 
long long p[1000001];
long long a, b, k, m;
vector<long long> v;
 
int main() {        
    cin >> a >> b >> k;
    for(int i=2; i<=b; i++) {
        if (p[i] == 0){
            if(i>=a) {
                v.push_back(i);
            }
            for(int j=i*2; j<=b; j+=i) { 
                p[j]=1;
            }
        }
    }
    if(v.size()<k) {
    	cout << -1 << "\n";
    }
    else {
    m=v[k-1] - a + 1;
    for(int i=0; i+k<v.size(); i++) {
   		m = max(m, v[i+k] - v[i]);
	}
    m = max(m,b-v[v.size()-k]+1);
    cout << m << "\n";
    }
}