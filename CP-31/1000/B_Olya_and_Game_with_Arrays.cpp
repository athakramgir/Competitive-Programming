#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        ll n; 
        cin >> n; 
        vector<ll> second_mins; 
        ll first_min = INT_MAX; 
        for(int i = 0; i < n; i ++){
            ll m; 
            cin >> m; 
            vector<ll> a(m); 
            for(auto &it : a) cin >> it; 
            sort(a.begin(), a.end());
            second_mins.push_back(a[1]); 
            first_min = min(first_min, a[0]); 
        }
        sort(second_mins.begin(), second_mins.end()); 
        ll sum_second_min = 0; 
        for(auto &it : second_mins) sum_second_min += it;  
        ll second_min = second_mins[0]; 
        ll ans = first_min + sum_second_min - second_min;
        cout << ans << endl; 
    }
    return 0;
}