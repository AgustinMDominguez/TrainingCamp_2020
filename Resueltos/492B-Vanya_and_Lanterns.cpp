#include <bits/stdc++.h>
using namespace std;

#define DBG(x) cout << #x << " = " << (x) << "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l, d;
    double rta;
    set<int> linternas;
    set<int>::iterator ite;
    cin >> n >> l;
    for(int i=0; i<n; ++i){
        cin >> d;
        linternas.insert(d);
    }

    d=0;
    ite = linternas.begin();
    for(set<int>::iterator it=linternas.begin(); it!=linternas.end(); ++it) {
        if((*it-*ite)>d)d=*it - *ite;
        ite = it;
    }
    rta = max( { (double)d/2,
              (double)(*(linternas.begin())), 
              (double)(l - *ite) }
              );
    cout << setprecision(11);
    cout << rta << "\n";
}