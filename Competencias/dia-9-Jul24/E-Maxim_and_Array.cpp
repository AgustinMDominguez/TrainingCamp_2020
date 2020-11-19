#include <bits/stdc++.h>
using namespace std;
 
set<pair<pair<long long, int>, char>> s;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, x;
    cin >> n >> k >> x;
    char sign; 
    bool f=false;
    long long a[n+5];
    for(int i=0; i<n; ++i) {
        cin >> a[i];
        if (a[i] < 0) {
            sign = '-';
            f = !f; /*al final f queda true si el producto es negativo*/
        }
        else sign = '+';
        s.insert({{abs(a[i]),i},sign});    
    }
    for (int i=0; i<k; ++i) {
        auto it = s.begin();
        pair<pair<long long, int>, char> aux = *it;
        s.erase(it);
        /*si f es true, aumento el abs del elemento más chico, que es negativo*/
        if (f) aux.first.first += x;
        else { /*si f es false, decremento el abs del elemento más chico con intención de hacerlo negativo*/
            aux.first.first -= x;
            if (aux.first.first<0) {
                f=true;
                if(aux.second == '+') aux.second = '-';
                else aux.second ='+';
                aux.first.first *=-1; /*le tomo el valor abs nuevamente (en caso de que sea negativo)*/
            }
        }
        s.insert(aux);
    }
    for (auto it=s.begin(); it!=s.end(); ++it) {
        a[((*it).first.second)] = (*it).first.first;
        if ((*it).second == '-') a[(*it).first.second] *=-1; 
    }
    for(int i=0; i<n; ++i) cout << a[i] << " ";
    cout << "\n";
}