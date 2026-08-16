#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t; 
    while(t--) {
        long long a, b; 
        cin >> a >> b; 
        long long x_king, y_king; 
        cin >> x_king >> y_king; 
        long long x_queen, y_queen; 
        cin >> x_queen >> y_queen; 
        set<pair<int, int>> king_hits, queen_hits; 
        int dx[4] = {1, -1, -1, 1};  
        int dy[4] = {1, -1, 1, -1}; 

        for(int j = 0; j < 4; j++) {
            king_hits.insert({x_king + dx[j]*a, y_king + dy[j]*b}); 
            king_hits.insert({x_king + dx[j]*b, y_king + dy[j]*a}); 
            queen_hits.insert({x_queen + dx[j]*a, y_queen + dy[j]*b}); 
            queen_hits.insert({x_queen + dx[j]*b, y_queen + dy[j]*a});
        }
        int count = 0; 
        for(auto it : king_hits) {
            if(queen_hits.find(it) != queen_hits.end()) {
                count++; 
            }
        }
        cout << count << endl; 
    }
    return 0;
}