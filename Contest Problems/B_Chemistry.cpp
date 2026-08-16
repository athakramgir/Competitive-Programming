#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t; 
    while(t--) {
        int n , k; 
        cin >> n >> k; 
        string s; 
        cin >> s; 
        
        int hash[256] = {0}; 
        for(auto it : s) {
            hash[it] ++; 
        }
        int odd_freq = 0; ;
        for(int i = 0; i < 255; i++) {
            if(hash[i]%2 != 0) {
                odd_freq = odd_freq + 1; 
            }
        }
        if(odd_freq > k + 1) cout << "NO" << endl;
        else cout << "YES" << endl;  
    }
    return 0;
}