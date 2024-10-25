#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase; 
    
    while(testcase--){
        int n; cin >> n; 
        cout << n << " "; 
        for(int i = 1; i <= n-1; i++) cout << i << " "; 
        cout << "\n"; 
    }
    return 0;

}
