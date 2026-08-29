#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string s; 
        cin >> s; 
        int n = s.size(); 
        int ones_count = 0; 
        int zero_count = 0; 
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') ones_count++; 
            else zero_count++; 
        }
        int mini = min(zero_count, ones_count); 
        if(mini%2 == 1) cout << "DA" << endl; 
        else cout << "NET" << endl; 
    }
    return 0;
}