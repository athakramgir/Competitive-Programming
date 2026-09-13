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
        int ones = 0; 
        int n = s.size();
        int zeroes = 0;
        for(auto &ch : s) {
            if(ch == '0') zeroes++; 
            else ones++; 
        }
        int len = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0' && ones > 0){ 
                ones--;
                len++;
            }
            else if(s[i] == '1' && zeroes > 0){ 
                zeroes--;
                len++; 
            }
            else{
                break; 
            }
        }
        cout << s.size() - len << endl;
    } 
    return 0;
}