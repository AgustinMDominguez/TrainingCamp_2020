#include<iostream>
using namespace std;
 
#define DBG(x) cout << #x << " = " << (x) << "\n"
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    cout<< max(a, max(b,c)) - min(a, min(b,c)) << "\n";
}