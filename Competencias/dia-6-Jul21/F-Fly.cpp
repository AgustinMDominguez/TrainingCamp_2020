#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n,m, x;
    cin >> n >> m;
	double f = m;
	for(int i=0; i<n*2; i++) {
		cin >> x;
		if(x==1){
            cout << -1 << "\n";
            return EXIT_SUCCESS;
        }
		f*=x/(x-1.0);
	}
    printf("%.10lf\n",f-m);
}