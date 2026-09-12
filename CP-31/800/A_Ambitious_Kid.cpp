#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n; 
    cin >> n;
    vector<long long> arr(n); 
    long long mini = LLONG_MAX;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        mini = min(mini, abs(arr[i])); 
    } 
    cout << mini << endl; 
    return 0;
}