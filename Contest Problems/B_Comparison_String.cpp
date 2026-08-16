#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n; 
        string s ;
        cin >> s; 

        long long longest_length = 1; 
        long long current_length = 1; 
        for(int i = 1; i < n; i++) {
            if(s[i] == s[i-1]) {
                current_length++ ;
            }
            else { 
                longest_length = max(longest_length, current_length); 
                current_length = 1; 
            }
            longest_length = max(longest_length, current_length); 
        }
        cout << longest_length + 1 << endl; 
    }
    return 0;
}