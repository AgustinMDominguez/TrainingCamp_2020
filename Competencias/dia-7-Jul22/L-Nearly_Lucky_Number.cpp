#include<iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k=0;
    cin >> n;
    while (n>0) {
        if(n % 10==4 || n%10==7 ) {
            k++;
        }
        n=n/10;
    }
    if (k==4 || k==7) {
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
    }
}