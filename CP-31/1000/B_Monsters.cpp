#include <bits/stdc++.h>
using namespace std;

static bool cmp(pair<int,int>& a, pair<int,int>& b) {
    if(a.first != b.first) return a.first > b.first; 
    return a.second < b.second; 
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, k; 
        cin >> n >> k; 
        vector<pair<int,int>> healthPoints(n+1); 
        for(int i = 1; i <= n; i++){
            int pts; 
            cin >> pts; 
            healthPoints[i] = {pts, i}; 
        }
        for(int i = 1; i <= n; i++) {
            healthPoints[i].first = healthPoints[i].first%k;   
            if(healthPoints[i].first == 0) 
                healthPoints[i].first = k; 
        }
        sort(healthPoints.begin() + 1, healthPoints.end(), cmp); 
        for(int i = 1; i <= n; i++) {
            cout << healthPoints[i].second << " "; 
        }
        cout << endl;
    }
    return 0;
}