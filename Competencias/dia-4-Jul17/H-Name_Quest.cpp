#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,p;
    unsigned int val1, val2, ind;
    bool encontrado = false;
    cin >> s >> p;
    ind = 0;
    for (unsigned int i=0; i<p.size();++i) {
        if(p[i]==s[ind]) {         // Si encontramos el caracter que estabamos buscando
            if (ind==s.size()-1) { // y ya encontramos todos los caracteres
                val1 = i;          // Guardamos el indice y terminamos el ciclo
                encontrado = true;
                break;
            } else ++ind;
        }
    }
 
    if(!encontrado) { cout << 0 << "\n"; return EXIT_SUCCESS; }
    encontrado = false;
 
    ind = s.size()-1u;
    for (unsigned int i=p.size()-1u; i>val1;--i) {
        if(p[i]==s[ind]) { // si encontramos el caracter que estabamos buscando
            if (ind==0) {  // y ya encontramos todos los caracteres
                val2 = i;
                encontrado = true;
                break;
            } else --ind;
        }
    }
    if(!encontrado) { cout << 0 << "\n"; return EXIT_SUCCESS; }
    cout << val2-val1 << "\n";
}