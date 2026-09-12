#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n, k; 
        cin >> n >> k; 
        if(k < n || k > 2*n-1) {
            cout << -1 << endl; 
            continue; 
        }
        long long p = 2*n - k ;
        vector<vector<long long>> mat(n+1, vector<long long>(n+1, 0)); 
        for(long long i = 1; i <= p; i++) {
            mat[i][i] = i; 
        }
        for(long long i = p+1; i <= n; i++) {
            mat[i][1] = i; 
        }
        for(long long j = p+1; j <= n; j++){
            mat[1][j] = n + (j-p); 
        }
        long long nextVal = k + 1;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++){
                if(mat[i][j] == 0) {
                    mat[i][j] = nextVal++; 
                }
            }
        }
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                cout << mat[i][j] << " "; 
            }
            cout << endl; 
        }
    }
    return 0;
}