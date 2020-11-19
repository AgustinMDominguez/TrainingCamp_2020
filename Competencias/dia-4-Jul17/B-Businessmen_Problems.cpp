#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, key, income;
    ll resultado=0;
    map<int, int> a;
    cin >> n; //elementos de la primera empresa
    for(int i=0; i<n; ++i) {
        cin >> key >> income;
        a[key] = income;
        resultado += (ll)income;
    }
 
    cin >> n;
    map<int, int>::iterator it;
    for(int i=0; i<n; ++i) { //elementos de la segunda empresa
        cin >> key >> income;
        it = a.find(key);
        if(it != a.end()) {
            if (income > it->second) {
                resultado += (ll)(income-it->second); //hay que sacarle a A y darselo a B
            }
        } else {
            resultado += (ll)income;
        }
    }
    cout << resultado << "\n";
}