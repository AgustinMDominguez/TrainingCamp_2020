#include <bits/stdc++.h>
using namespace std;
 
#define DBG(x) cout << #x << " = " << (x) << "\n"
#define END(e) {cout << (e) << "\n"; return EXIT_SUCCESS;}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s;
    multiset<string> year1;
    multiset<string>::iterator it;
    
    cin >> n;
    for(int i=0; i<n; ++i) {
        cin >> s;
        year1.insert(s);
    }
    for(int i=0; i<n; ++i) {
        cin >> s;
        it = year1.find(s);
        if(it!=year1.end()) year1.erase(it);
    }
    END(year1.size())
}