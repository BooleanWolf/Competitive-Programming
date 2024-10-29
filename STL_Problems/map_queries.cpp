#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase; 
    
    map<string, int> marks; 
    
    while(testcase--){
    	int q; cin >> q; 
    	if(q == 1) {
    		string x; 
    		int y;
    		cin >> x >> y; 
    		marks[x] += y; 
    	}
    	
    	if(q == 2) {
    		string x; 
    		cin >> x;
    		auto it = marks.find(x); 
    		if(it != marks.end()) {
    			marks.erase(x); 
    		}
    	}
    	
    	if(q == 3) {
    		string x; 
    		cin >> x;
    		cout << marks[x] << endl; 
    	}
     }
    return 0;

}
