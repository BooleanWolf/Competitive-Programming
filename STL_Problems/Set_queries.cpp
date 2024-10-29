#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase; 
    
    set<int> s; 
    
    while(testcase--){
    	int q, val; 
    	cin >> q >> val;
    	if(q == 1) s.insert(val); 
    	if(q == 2) s.erase(val); 
    	if(q == 3) {
    		auto it = s.find(val);
    		if(it != s.end()) {
    			cout << "Yes" << endl; 
     		}
     		else {
     			cout << "No" << endl; 
     		}
    	}
    }
    return 0;

}
