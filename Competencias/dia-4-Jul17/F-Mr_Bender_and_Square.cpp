#include <bits/stdc++.h>
using namespace std;
 
int n, x, y;
long long c;
 
long long sum(long long a, long long b) {
    long long result = (b - a + 1) * (a + b) / 2; 
    return result;
}
long long luces_encendidas(long long t) {
    long long contador = 2 * (t + 1) * (t + 1) - 2 * t - 1;
    if(x - t <= 0)contador -= (t - x + 1) * (t - x + 1);	
    if(x + t > n)contador -= (x + t - n) * (x + t - n);
    if(y - t <= 0) {	
        contador -= sum(max((long long)1, t - y - x + 2), t - y + 1) + sum(max((long long)1, t - y - n + x + 1), t - y + 1) - t + y - 1;
    if(y + t > n) {
        contador -= sum(max((long long)1, y + t - n - x + 1), y + t - n) + sum(max((long long)1, y + t - 2 * n + x), y + t - n) - y - t + n;
    }
    return contador;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> x >> y >> c;
    long long l = 0, r = 2 * n;
    while(l < r) {
        long long mid = (l + r) / 2;
        if(luces_encendidas(mid) >= c)r = mid;
        else l=mid+1;
    cout << r << '\n';
    return 0;
}