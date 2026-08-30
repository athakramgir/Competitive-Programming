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
        string s; 
        cin >> s; 

        bool flag = false; 
        long long count_empty = 0; 
        for(int i = 0; i < n; i++) {
            if(s[i] == '.' && i+1 < n && s[i+1] == '.' && i + 2 < n && s[i+2] == '.') {
                flag = true; 
                break; 
            }
            if(s[i] == '.') {
                count_empty ++; 
            }
        }
        if(flag) cout << 2 << endl; 
        else {
            cout << count_empty << endl; 
        }
    }
    return 0;
}