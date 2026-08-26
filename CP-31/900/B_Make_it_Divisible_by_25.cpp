#include <bits/stdc++.h>
using namespace std;

int minOperations(string& n, string& possible_values) {
    int operations = 0; 
    int ind = possible_values.size() - 1; 

    for(int i = n.size()-1; i >= 0; i--) {
        if(n[i] == possible_values[ind]) {
            ind--; 
            if(ind < 0) break; 
        }
        else {
            operations++;
        }
    }
    if(ind >= 0) operations = INT_MAX; 
    return operations; 
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string n; 
        cin >> n; 
        vector<string> possible_values = {"00", "25", "75", "50"}; 
        int ans = INT_MAX; 
        for(auto possible_value: possible_values) {
            ans = min(ans, minOperations(n, possible_value)); 
        }
        cout << ans << endl; 
    }
    return 0;
}