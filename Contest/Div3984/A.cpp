#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase; 
    
    while(testcase--){
    	int n; cin >> n; 
    	vector<int> v(n+1);
    	int flag = true; 
    	for(int i = 0; i < n; i++) cin >> v[i]; 
    	
    	for(int i = 1; i < n; i++) {
    		if(abs(v[i] - v[i-1]) != 5 || abs(v[i] - v[i-1]) != 7) {
    			cout << "NO" << endl;
    			
    			break;
    		}
    	}
    	
    	if(!flag) {
    		continue;
    	} else {
    		cout << "YES" << endl; 
    	}
    	
    }
    return 0;

}
