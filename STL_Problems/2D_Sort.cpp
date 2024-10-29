#include <bits/stdc++.h>
using namespace std;


bool cmp(pair<int, int> a, pair<int, int> b) {
	auto [x1, y1] = a; 
	auto [x2, y2] = b; 
	
	if(x1 > x2) {
		return true; 
	}
	else if(x1 == x2) {
		if(y1 < y2) return true;
	}
	
	return false; 
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int testcase ;
    cin >> testcase; 
    
    
   
    while(testcase--){
    	vector<pair<int, int>> v; 
    	int n;
    	cin >> n; 
    	
    	for(int i = 0; i < n; i++) {
    		int x, y; 
    		cin >> x >> y; 
    		v.push_back({x, y}); 
    	}
    	
    	sort(v.begin(), v.end(), cmp);
    	reverse(v.begin(), v.end()); 
    	
    	for(auto [x, y]: v) {
    		cout << x << " " << y << "\n"; 
    	}
    }
    return 0;

}
