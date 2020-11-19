#include <bits/stdc++.h>
using namespace std;
 
#define DBG(x) cout << #x << " = " << (x) << "\n"
#define END(e) {cout << (e) << "\n"; return EXIT_SUCCESS;}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t, n, ind;
    string word;
    cin >> t;
    for(int i=0; i<t; ++i) {
        cin >> n;
        cin >> word;
        if(n==1){ cout << 0 << "\n"; continue; }
        for(ind=0; ind<n; ++ind) {
            if(word[ind]=='>' || word[(n-1)-ind]=='<') break;
        }
        cout << ind << "\n";
    }
}