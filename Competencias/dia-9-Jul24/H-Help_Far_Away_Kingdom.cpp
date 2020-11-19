
#include <bits/stdc++.h>
using namespace std;
 
#define DBG(x) cout << #x << " = " << (x) << "\n"
#define END(e) {cout << (e) << "\n"; return EXIT_SUCCESS;}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    queue<char> digitos;
    char digAct, digAnt;
    int digUlt;
    while(true) {
        cin >> digAct;
        if(digAct=='.')break;
        digAnt = digAct;
        digitos.push(digAct);
    }
    
    digUlt = (int)(digAnt-'0');
    if(digUlt==9)END("GOTO Vasilisa.")
    while(digitos.size()>1){
        cout << digitos.front();
        digitos.pop();
    }
    cin >> digAct;
    cout << (((int)(digAct-'0')<5) ? digUlt : digUlt+1) << "\n";
}