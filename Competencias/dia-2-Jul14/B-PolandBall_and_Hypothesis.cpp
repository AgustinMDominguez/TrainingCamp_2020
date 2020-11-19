#include <bits/stdc++.h>
using namespace std;
  
bool isPrime(int m) {
    bool result = true;
    int i=2;
    while (i <= m/2){
        if (m%i == 0) {
            result=false;
            i=m;
        }
        i++;
   }
   return result;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, aux, m=1;
    cin >> n;
    while (m<1001) {
        aux = n*m + 1;
        if (!isPrime(aux)) {
            cout << m << "\n";
            return EXIT_SUCCESS;
        }
        ++m;
    }
}