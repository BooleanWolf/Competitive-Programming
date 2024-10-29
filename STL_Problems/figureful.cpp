#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase; 
    
    map<pair<int, int>, string> fig; 
    
    while(testcase--){
    	int x, y; string s; cin >> x >> y >> s; 
    	pair<int, int> p = make_pair(x, y); 
    	fig[p] = s; 
    }
    
    int q; cin >> q; 
    
    for(int i = 0; i < q; i++) {
    	int a, b; cin >> a >> b; 
    	pair<int, int> f = make_pair(a, b); 
    	if(fig.find(f) != fig.end()) {
    		cout << fig[f] << endl; 
    	}
    }
    return 0;

}
