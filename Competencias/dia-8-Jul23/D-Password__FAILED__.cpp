#include <bits/stdc++.h>
using namespace std;
 
#define DBG(x) cout << #x << " = " << (x) << "\n"
#define END(e) {cout << (e) << "\n"; return EXIT_SUCCESS;}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    char first;
    unsigned int j, maxlargo=0, MAX_LARGO;
    string s;
    cin >> s;
    first = s[0];
 
    for(unsigned int i=1; i<s.size()-1; ++i) {
        if(i+maxlargo>=s.size())break;
        if(s[i]==first) {
            j = 1;
            while((i+j)<s.size() && s[j]==s[i+j])++j;
            /*if(i+j<s.size()){
                maxlargo = max(maxlargo, j);
            }*/
            if(i+j==s.size()){
                maxlargo = max(maxlargo, j-1);
            } else {
                maxlargo = max(maxlargo, j);
            }
        }
    }
    MAX_LARGO = maxlargo;
    for(unsigned int m=s.size()-MAX_LARGO; m<s.size(); ++m) {
        unsigned int i=0;
        for(;i<maxlargo; ++i) {
            if(s[i]!=s[m+i])break;
        }
        if(i==maxlargo) {
            //for(unsigned int j=0; j<maxlargo-1; ++j)cout << s[j];
            for(unsigned int j=0; j<maxlargo; ++j)cout << s[j];
            cout << "\n";
            return EXIT_SUCCESS;
        } else {
            --maxlargo;
        }
    }
    END("Just a legend")
}