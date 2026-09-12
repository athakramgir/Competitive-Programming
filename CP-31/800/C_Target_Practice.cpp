#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n = 10; 
        vector<vector<char>> mat(n, vector<char>(n, '.')); 
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> mat[i][j]; 
            }
        }
        int score[10][10] = {
            {1,1,1,1,1,1,1,1,1,1},
	        {1,2,2,2,2,2,2,2,2,1},
	        {1,2,3,3,3,3,3,3,2,1},
	        {1,2,3,4,4,4,4,3,2,1},
	        {1,2,3,4,5,5,4,3,2,1},
	        {1,2,3,4,5,5,4,3,2,1},
	        {1,2,3,4,4,4,4,3,2,1},
	        {1,2,3,3,3,3,3,3,2,1},
	        {1,2,2,2,2,2,2,2,2,1},
	        {1,1,1,1,1,1,1,1,1,1}}; 

        long long ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(mat[i][j] == 'X'){
                    ans += score[i][j]; 
                }
            }
        }
        cout << ans << endl; 
    }
    return 0;
}