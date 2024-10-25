#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase; 
    
    while(testcase--){
    	long long int n; cin >> n; 
    
    	long long int ans = 0;
    	for(long long int i = 0; i < n; i++) {
    		long long int d; cin >> d;
    		ans += d; 
    	}
    	
    	cout << abs(ans) << "\n"; 
    }
    return 0;

}
