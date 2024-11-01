#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase; 
    
    while(testcase--){
    	stack<int> st; 
    	queue<int> q; 
    	
    	int n; string type; 
    	cin >> n >> type; 
    	
    	while(n--) {
    			if(type == "FIFO") {
    		string ks; cin >> ks; 
    		if(ks == "IN") {
    			int k; cin >> k; 
    			q.push(k); 
    		}
    		else{
    			if(!q.empty())
    			{cout << q.front() << "\n"; 
    			q.pop(); }
    			else {
    				cout << "None" << "\n"; 
    			}
    		}
    		
    	}
    	else {
    		string ks; cin >> ks; 
    		if(ks == "IN") {
    			int k; cin >> k; 
    			st.push(k); 
    		}
    		else{
    			if(!st.empty())
    			{cout << st.top() << "\n"; 
    			st.pop(); }
    			else {
    				cout << "None" << "\n"; 
    			}
    		}
    		
    	}
    	}
    	
    	
    }
    return 0;

}
