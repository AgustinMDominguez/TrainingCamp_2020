#include <bits/stdc++.h>
using namespace std;
 
#define DBG(x) cout << "DBG::"<< #x << " = " << (x) << "::DBG" << endl;
#define END(e) {cout << (e) << "\n"; return EXIT_SUCCESS;}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    const char hello[] = {'h', 'e', 'l', 'l', 'o'};
    int i=0;
    char a;
    while(a!='\n' && i<5) {
        cin >> noskipws >> a;
        if(a==hello[i])++i;
    }
    if(i==5)END("YES")
    END("NO")
}