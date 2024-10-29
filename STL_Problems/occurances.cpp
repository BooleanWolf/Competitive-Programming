#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

   	map<int, int> m; 
   	vector<int> ord; 
   	
   	int x; 
   	while(cin >> x) {
   		
   		if(m[x] == 0) ord.push_back(x);
   		m[x]++; 
   		
   		 
   	}
   	
   	for(auto x: ord) {
   		cout << x << " " << m[x] << "\n"; 
   	}
   	
   	
    return 0;

}
