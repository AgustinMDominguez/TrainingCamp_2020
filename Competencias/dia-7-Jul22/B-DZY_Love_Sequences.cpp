#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n, result=1;
    cin >> n;
    int aux1[100005] = {}, aux2[100005] = {}, seq[100005];
    for (i=1; i<=n; ++i) {
        cin >> seq[i];
        ++aux1[i];
        ++aux2[i];
        if ((i-1) && seq[i] > seq[i-1]) {
			aux1[i] += aux1[i-1];
        }
    }
    for (i = n-1; i>=1; --i) {
        if (seq[i+1] > seq[i]) {
            aux2[i] += aux2[i+1];
        }
    }
    for (i=1; i<=n; ++i) {
        if (seq[i+1] - seq[i-1] > 1) {
			result = max(result, aux1[i-1] + aux2[i+1] + 1);
        }
        else {
			result = max(result, max(aux1[i-1] + 1, aux2[i+1] + 1));
        }
    }
 
    cout << result << "\n";
}