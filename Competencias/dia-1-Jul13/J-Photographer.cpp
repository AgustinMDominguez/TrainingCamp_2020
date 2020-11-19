#include <bits/stdc++.h>
using namespace std;

struct cliente_t {
    int id;
    unsigned long long cost;
};

bool customcompare(cliente_t cl1, cliente_t cl2) {
    return (cl1.cost<cl2.cost);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int numClientes, memTotal, numAprobados= 0;
    unsigned long long costBaja, costAlta, numBaja, numAlta, memUsada = 0;
    cin >> numClientes >> memTotal >> costBaja >> costAlta;
    cliente_t cliArr[numClientes];
    int cliAprobados[numClientes];

    for(int i=0; i<numClientes; i++){
        cliAprobados[i] = -1;
        cin >> numBaja >> numAlta;
        cliArr[i].id = i+1;
        cliArr[i].cost = numBaja*costBaja + numAlta*costAlta;
    }

    sort(cliArr, cliArr+numClientes, customcompare);

    for(int i=0; i<numClientes; i++) {
        memUsada += cliArr[i].cost;
        if(memUsada>(unsigned long long)memTotal)break;
        cliAprobados[i] = cliArr[i].id;
        numAprobados++;
    }

    cout << numAprobados << "\n";

    for(int i=0; i<numClientes; i++) {
        if(cliAprobados[i] == -1)break;
        cout << cliAprobados[i] << " ";
    }
    cout << "\n";
}