#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int testcase;
    cin >> testcase; 
    
    while(testcase--){
    	long long int n; cin >> n; 
    	long long int even = n/2; 
    	long long int odd = (n + 1)/2; 
    	
    	long long int ans = odd * even + even * odd;
    	cout << ans << endl; 
    }
    return 0;

}
