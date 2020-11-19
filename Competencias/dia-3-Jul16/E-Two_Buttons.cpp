#include <iostream>
using namespace std;
 
int main () {
    int n, m;
    cin >> n >> m;
    int div_m = m, n_aux = n, count = 0, i=1;
    int div[m] = {0};
    div[0] = m;
    if (n > m) {
        cout << n-m << "\n";
    }
    else {
        while (div_m > n) {
            if (div_m%2) {
                div_m = (div_m/2) + 1;
                div[i] = div_m;
            }
            else {
                div_m = div_m/2;
                div[i] = div_m;
            }
            ++i;
        }
        while (n_aux != m) {
            count += (n_aux - div[i-1]);
            if (i-1 == 0) {
                break;
            }
            n_aux = 2*div[i-1];
            ++count; 
            --i;
        }
        cout << count << "\n";
    }
}