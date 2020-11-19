#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int m,n,a,b;
    cin >> m >> n;
    int plano[m][n];
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> plano[i][j];
        }
    }
    int deleted_trees = 0, result = INT_MAX;
 
    cin >> a >> b;
 
    for(int i=0; i<=m-a; i++) {
        for(int j=0; j<=n-b; j++) {   
            deleted_trees=0;
            for(int l=i; l<a+i; l++) {
                for(int k=j; k<b+j; k++) {
                    deleted_trees = deleted_trees + plano[l][k];
                }
            }
            result= min(result, deleted_trees);
        }
    }
    for(int i=0; i<=m-b; i++) {
        for(int j=0; j<=n-a; j++) {    
            deleted_trees = 0;
            for(int l=i; l<b+i; l++) {
                for(int k=j; k<a+j; k++) {
                    deleted_trees = deleted_trees + plano[l][k];
                }
            }
            result= min(result, deleted_trees);
        }
    }
    cout << result << "\n";
}