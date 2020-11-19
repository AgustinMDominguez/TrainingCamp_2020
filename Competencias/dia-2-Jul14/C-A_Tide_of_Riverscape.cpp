#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, p;
    cin >> n >> p;
    int a[n+1], result = 0;
    char ch[n+1];
    cin >> ch+1;
    for (int i=1 ; i<=n; i++) { /*leo el input*/
        if (ch[i] == '.') {
            a[i] = -1; 
        }
        else {
            a[i] = ch[i] - '0'; /*para obtener el numero representado por el char*/
        }    
    }
    for (int i=1;i<=n;i++) {
        if (i+p > n) {
            break;
        }
        if (a[i] != -1 && a[i+p] != -1 && a[i] != a[i+p]) { /*caso final*/
            result = 1;
            break;
        }
        if (a[i] != -1 && a[i+p] == -1) {
            a[i+p] = a[i] ^ 1; /*xor*/
            result = 1;
            break;
        }
        if (a[i] == -1 && a[i+p] != -1) {
            a[i] = a[i+p]^1;
            result = 1;
            break;
        }
        if (a[i] == -1 && a[i+p] == -1) {
            a[i] = 0;  
            a[i+p] = 1;
            result = 1;
            break;
        }
    }
    if (!result) {
        cout << "NO" << "\n";
    }
    else {
        for(int i = 1; i<=n; i++) {
            if (a[i] == -1) {
                cout << "0";
            }
            else {
                cout << a[i];
            }
        }
        cout << "\n";
    }
}