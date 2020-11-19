#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int rtaAlicia = 0, rtaBob=0, indAli=0;
    int indBob, t;
    cin >> indBob;

    int barr[indBob], aux[indBob] = {0}; //aux:: 0==no ocupado 1==Alicia lo ocupo 2==Bob lo ocupo
    for(int i=0;i<indBob;i++)cin>>barr[i];
    indBob--; // Hasta ahora indBob se uso como el largo del array, ahora lo usamos propiamente como indice de Bob
    
    while(indAli < indBob) {
        if(barr[indAli] != barr[indBob]) {
            aux[indAli] = 1;
            aux[indBob] = 2;
            t = min(barr[indAli],barr[indBob]);
            barr[indAli] -= t;
            barr[indBob] -= t;
            if(barr[indAli]==0){ //Alicia termino su barra actual
                rtaAlicia++;
                indAli++;
            } else { //Bob termino su barra actual
                rtaBob++;
                indBob--;
            }
        } else {
            rtaAlicia++;
            rtaBob++;
            indAli++;
            indBob--;
        }
    }

    if (indAli == indBob ) {
        //Llega aca cuando ambos quieren comer una misma barra: Pueden haber llegado al mismo tiempo
        if(aux[indAli] < 2){ rtaAlicia++; } 
        else { rtaBob++; }
    }
    cout << rtaAlicia << " " << rtaBob << "\n";
}