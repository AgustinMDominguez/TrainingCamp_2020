#include <bits/stdc++.h>
using namespace std;
 
#define DBG(x) cout << #x << " = " << (x) << "\n"
#define END(e) {cout << (e) << "\n"; return EXIT_SUCCESS;}
 
inline int digitSum(int a) {
    return 1 + (a-1)%9;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, DA;
    cin >> a >> b;
    a = digitSum(a);
    DA = a;
    for(int i=1; i<b; ++i) {
        if(a%9==0)END(9)
        a = digitSum(a*DA);
    }
    END(a)
}