#include <bits/stdc++.h>
using namespace std;


long long suffixCount(long long x, vector<long long>& arr) {
    return arr.end() - lower_bound(arr.begin(), arr.end(), x); 
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n , m;
        cin >> n >> m; 
        vector<long long> arr(n); 
        for(int i = 0; i < n; i++) cin >> arr[i]; 
        sort(arr.begin(), arr.end());
        unordered_map<long long, long long> mpp; 
        for(auto v : arr) mpp[v]++; 
        set<long long> st; 
        st.insert(1); 
        for(auto el : arr) {
            st.insert(el); 
            if(el/2 >= 1) st.insert(el/2);
        }
        long long best = 0; 
        for(auto i : st) {
            long long val = suffixCount(i, arr); 
            auto it = mpp.find(2*i);
            if(it != mpp.end()) val += it->second; 
            best = max(best, val);  
        }
        cout << best << endl; 
    }
    return 0;
}