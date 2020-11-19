#include <bits/stdc++.h>
using namespace std;
 
bool customsort(pair<int,int> a, pair<int,int> b) {
    return a.second < b.second;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, ans=0, anterior=0;
    cin >> n;
    pair<int,int> ordenes[n];   
    for (int i=0; i<n; ++i)cin >> ordenes[i].first >> ordenes[i].second;
    sort (ordenes, ordenes+n, customsort);
    for (int i=0; i<n; ++i) {
        if(ordenes[i].first > anterior) {
            anterior = ordenes[i].second;
            ++ans;
        }
    }
    cout << ans << "\n";
}