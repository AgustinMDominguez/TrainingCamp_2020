#include <bits/stdc++.h>
using namespace std;
 
#define DBG(x) cout << #x << " = " << (x) << "\n"
#define END(e) {cout << (e) << "\n"; return EXIT_SUCCESS;}
 
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    multiset<ll> snowpiles;
    multiset<ll>::iterator customit;
    ll melted, totalmelted=0, heat, count, accumulatedHeat=0;
    int n, *snowarray;
    cin >> n;
    snowarray = new int[n];
    for(int i=0;i<n;++i)cin >> snowarray[i];
    for(int i=0;i<n;++i) {
        cin >> heat;
        melted = 0;
        if(heat>=snowarray[i]) {
            melted += snowarray[i];
        } else {
            snowpiles.insert(accumulatedHeat + (ll)snowarray[i]);
        }
        customit = snowpiles.upper_bound(accumulatedHeat+heat);
        for(auto it=snowpiles.lower_bound(accumulatedHeat); it!=customit; ++it) {
            melted += (*it)-accumulatedHeat;
        }
        count = 0;
        for(;customit!=snowpiles.end(); ++customit)++count;
        melted += count*heat;
        cout << melted << " ";
        accumulatedHeat += heat;
        totalmelted += melted;
    }
    cout << "\n";
}