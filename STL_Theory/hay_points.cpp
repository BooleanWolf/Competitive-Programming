#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n; cin >> m >> n; 
    map<string, long long> sal; 
    vector<string> vec; 
    
    while(m--) {
    	string s; long long b; 
    	cin >> s >> b; 
    	
    	sal[s] = b; 
    } 
    
    while(n--) {
    	string word; 
    	long long salary = 0; 
    	
    	while(cin >> word) {
    		if(word == ".") break; 
    		
    		if(sal.find(word) != sal.end()) {
    			salary += sal[word]; 	
    		}
    	}
    	
    	cout << salary << "\n"; 
    }
    
    
    
    
    return 0;

}
