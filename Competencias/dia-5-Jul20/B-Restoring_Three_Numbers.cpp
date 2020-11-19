#include <bits/stdc++.h>
using namespace std;
 
#define DBG(x) cout << #x << “ = ” << (x) << "\n"
#define END(e) {cout << (e) << "\n"; return EXIT_SUCCESS;}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int input1, input2, input3, input4, aux;
        cin >> input1 >> input2 >> input3 >> input4;
        aux = max({input1,input2,input3,input4});
        if(aux - input1 != 0) cout << aux - input1 << " ";
        if(aux - input2 != 0) cout << aux - input2 << " ";
        if(aux - input3 != 0) cout << aux - input3 << " ";
        if(aux - input4 != 0) cout << aux - input4 << "\n";
}