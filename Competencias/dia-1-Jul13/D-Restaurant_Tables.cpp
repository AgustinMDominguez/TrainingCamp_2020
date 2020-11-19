#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);   
    int n, singlefree, couplefree, cliente; //cliente va a ser 1 o 2
    int rejected = 0, coupleone = 0;
    cin >> n >> singlefree >> couplefree;
    for(int i =0; i<n; ++i){
        cin >> cliente;
        if (cliente == 1) {
            // Cliente individual
            if(singlefree > 0){
                singlefree--;
            }
            else if(couplefree > 0) {
                couplefree--;
                coupleone++;
            }
            else if(coupleone > 0) {
                coupleone--;
            }
            else{
                rejected++;
            }
        } else {
            // Grupo de 2 clientes
            if(couplefree > 0) {
                couplefree--;
            }
            else {
                rejected+=2;
            }
        }
    }
    cout << rejected <<"\n";
}