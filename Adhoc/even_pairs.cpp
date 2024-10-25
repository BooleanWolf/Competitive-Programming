#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int testcase;
    cin >> testcase; 
    
    while(testcase--){
    	long long int a, b; cin >> a >> b; 
    	
    	long long int ans = 0; 
    	
    	// odd + odd 
    	long long int odd1 = (a + 1)/2;
    	long long int odd2 = (b + 1)/2; 
    	
    	ans += odd2 * odd1;
    	
    	// even + even 
    	long long int ev1 = (a)/2;
    	long long int ev2 = (b)/2;
 		
 		ans += ev1 * ev2;
 		
    	cout << ans << endl; 
    }
    return 0;

}
