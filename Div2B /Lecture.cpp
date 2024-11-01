#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

  	int n, m; cin >> n >> m; 
  	map<string, string> mp; 
  	
  	for(int i =0; i < m; i++) {
  		string f, s; cin >> f >> s; 
  		mp[f] = s; 
  	}
  	
  	
  	
  	for(int i = 0; i < n; i++){
  		string word; cin >> word; 
  		if (word.size() <= mp[word].size()) {
  			cout << word << " "; 
  		}
  		else {
  			cout << mp[word] << " "; 
  		}
  	}
  	
  	cout << "\n"; 
  	
  	
  	 
  	
  	
  	
  	
    return 0;

}
