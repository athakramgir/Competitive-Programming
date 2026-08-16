#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n; 
        cin >> n; 
        vector<long long> perm(n); 
        for(int i = 0; i < n; i++) cin >> perm[i]; 

        long long k = abs(perm[0]-1); 
        for(int i = 1; i < n; i++) {
            k = __gcd(k, abs(perm[i] - (i + 1))); 
        }
        cout << k << endl; 
    }
    return 0;
}