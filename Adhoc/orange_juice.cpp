#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase = 1;
    // cin >> testcase; 
    
    while(testcase--){
    	int n;
    	cin >> n; 
    	
    	double ans = 0; 
    	for(int i = 0; i < n; i++) {
    		double d; cin >> d; 
    		ans += (d/ 100); 
    	} 
    	
    	ans /= n * 1.0; 
    	
    	cout << ans*100 << "\n"; 
    	    	
    	
    }
    return 0;

}
