#include <bits/stdc++.h>
using namespace std;
 
vector<int> v[100001];
int D[100001], n, m, ans=0;
 
void dfs(int x,int y, int count){
	if(D[y]) {
        ++count;
    }
    else {
        count=0;
    }
	if (count>m) {
        return;
    }
    if (v[y].size() == 1 && y!=1) {
        ++ans;
    }
	for(int j=0;j < v[y].size(); ++j) {
        if(v[y][j] != x) {
            dfs(y, v[y][j], count);
        }
    }
}
int main(){
    cin >> n >> m;
    for(int i=1; i<=n; ++i){
        cin >> D[i];
    }
    for(int i=1; i<n; ++i){
	    int a, b;
	    cin >> a >> b;
	    v[a].push_back(b);
	    v[b].push_back(a);
    }
    dfs(0,1,0);
    cout << ans<< "\n";
}