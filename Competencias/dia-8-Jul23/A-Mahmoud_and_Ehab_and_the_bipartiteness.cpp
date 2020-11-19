#include <bits/stdc++.h>
using namespace std;
 
#define DBG(x) cout << "dbg:: "<< #x << " = " << (x) << "\n"
 
 
set<int> *graf = nullptr; // Arreglo de sets donde el indice representa el nodo y el set representa las conexiones
bool *visitadosarr = nullptr;
 
pair<int,int> dfs(int node) {
    int contador1=0, contador2=0, x;
    pair<int, int> ret;
    stack<int> s1, s2;
    s1.push(node);
    visitadosarr[node] = true;

    while(!(s1.empty() && s2.empty())) {
        if(!s1.empty()) {
            x = s1.top();
            s1.pop();
            ++contador1;
            for(int y : graf[x]) {
                if(!visitadosarr[y]) {
                    s2.push(y);
                    visitadosarr[y] = true;
                }
            }
        }
        
        if(!s2.empty()) {
            x = s2.top();
            s2.pop();
            ++contador2;
            for(int y : graf[x]) {
                if(!visitadosarr[y]) {
                    s1.push(y);
                    visitadosarr[y] = true;
                }
            }
        }
    }
    ret.first = contador1;
    ret.second = contador2;
    return ret;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int cantVertices, nd1, nd2;
    pair<int,int> parAux;
    cin >> cantVertices;
    graf = new set<int>[cantVertices];
    visitadosarr = new bool[cantVertices]();
 
    for(int i=0;i<cantVertices-1;++i) {
        cin >> nd1 >> nd2;
        graf[nd1-1].insert(nd2-1);
        graf[nd2-1].insert(nd1-1);
    }
 
    parAux = dfs(0);
    cout << (long long)(parAux.first)*(long long)(parAux.second) - (long long)(cantVertices-1) << "\n";
}