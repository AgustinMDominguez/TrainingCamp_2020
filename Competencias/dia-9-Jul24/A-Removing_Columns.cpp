#include <bits/stdc++.h>
using namespace std;
 
#define DBG(x) cout << #x << " = " << (x) << "\n"
#define END(e) {cout << (e) << "\n"; return EXIT_SUCCESS;}
 
void setDiff(set<int>& s1, set<int>& s2) {
    set<int>::iterator it1, it2;
    for(it2=s2.begin(); it2!=s2.end(); ++it2) {
        it1 = s1.find(*it2);
        if(it1!=s1.end())s1.erase(it1);
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char **mtx;
    int filas, f, columnas, c, respuesta=0;
    bool currentColRemoved;
    set<int> fNoResuelt, auxSet;
    set<int>::iterator itNoResuelt;

    cin >> filas >> columnas;
    if(filas==1)END(0)
    mtx = new char*[filas];
    for(f=0;f<filas;++f) {
        mtx[f] = new char[columnas];
        for(c=0; c<columnas; ++c) cin >> mtx[f][c];
    }
    c=0;
    while(c<columnas) {
        f=1;
        while(f<filas) {
            if(mtx[f][c]<mtx[f-1][c]) {
                ++respuesta;
                break;
            } else ++f;
        }
        if(f==filas)break;
        ++c;
    }
    if(c==columnas)END(respuesta);
    for(f=1; f<filas; ++f) {
        if(mtx[f][c]==mtx[f-1][c])fNoResuelt.insert(f);
    }
    ++c;
    
    while(c<columnas && !fNoResuelt.empty()) {
        currentColRemoved = false;
        auxSet.clear();
        for(itNoResuelt = fNoResuelt.begin(); itNoResuelt!=fNoResuelt.end(); ++itNoResuelt) {
            f = *itNoResuelt;
            if(mtx[f][c]<mtx[f-1][c]) {
                ++respuesta;
                currentColRemoved = true;
                break;
            } else if (mtx[f][c]>mtx[f-1][c]) {
                auxSet.insert(f);
            }
        }
        if(!currentColRemoved) setDiff(fNoResuelt, auxSet);
        ++c;
    }
    END(respuesta);
}