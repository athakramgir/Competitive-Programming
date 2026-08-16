#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n, x1, x2, k;
        cin >> n >> x1 >> x2 >> k;
        long long diff = abs(x1 - x2); 
        long long dist = min(diff, n - diff); 
        long long ans = k + dist; 
        cout << ans << endl; 
    }
    return 0;
}