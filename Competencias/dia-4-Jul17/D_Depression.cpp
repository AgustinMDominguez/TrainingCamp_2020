#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, m;
    char aux;
    cin >> h >> aux >> m;
    if(h >= 12)h = h % 12;
    cout << (h*30) + (m/2.0) <<" "<< m * 6 << "\n";
}