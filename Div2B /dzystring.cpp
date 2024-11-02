#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

   	string s; cin >> s; 
   	int n; cin >> n; 
   	map<char, int> mp; 
   	
   	vector<int> v; 
   	
   	
   	for(int i = 0;i<26; i++) {
   		int d; cin >> d; 
   		v.push_back(d); 
   		mp['a' + i] = d;
   	}
   	
   	sort(v.begin(), v.end());  
   	reverse(v.begin(), v.end());  	
   	int max_value = 0; 
   	
   	int i; 
   	for(i = 0; i < s.size(); i++) {
   		max_value += (i + 1)*mp[s[i]]; 
   	}
   	// cout << v[0] << endl; 
   	
   	for(i = s.size() + 1; i <= (s.size() + n); i++) {
   		// cout << i << " u\n";
   		max_value += (i)*v[0]; 
   	}
   	
   	cout << max_value << endl; 
   	
   	
   	
    return 0;

}
