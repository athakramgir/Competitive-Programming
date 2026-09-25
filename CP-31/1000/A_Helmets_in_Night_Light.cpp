#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        ll n, p; 
        cin >> n >> p; 
        vector<ll> a(n), b(n); 
        for(int i = 0; i < n; i++) {
            cin >> a[i]; 
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i]; 
        }
        vector<pair<ll,ll>> arr(n);
        for(int i = 0; i < n; i++) {
            arr[i].first = b[i];
            arr[i].second = a[i]; 
        } 
        sort(arr.begin(), arr.end()); 
        ll minCost = p; 
        ll alreadyInformed = 1; 
        for(auto it : arr) {
            ll canBeShared = it.second; 
            ll costToShare = it.first;
            if(costToShare >= p) {
                break; 
            }
            if(alreadyInformed + canBeShared > n) {
                minCost += (n - alreadyInformed)*costToShare;
                alreadyInformed = n; 
                break; 
            }
            else{
                minCost += (canBeShared) * costToShare; 
                alreadyInformed += canBeShared; 
            }
        }
        minCost += (n - alreadyInformed) * p; 
        cout << minCost << endl; 
    }
    return 0;
}