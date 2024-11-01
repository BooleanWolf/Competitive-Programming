#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k; cin >> n >> m >> k; 
    
    vector<long long> player(m+2);
    for(int i = 1; i <= m + 1; i ++) {
    	cin >> player[i]; 
    }
    
    long long fedor = player[m+1]; 
    int potential_friend = 0; 
    
    
	bitset<20> fedor_bit(fedor); 
	
	for(int i = 1; i <= m; i++){
		bitset<20> f(player[i]); 
		auto p = f ^ fedor_bit; 
		if(p.count() <= k) potential_friend++; 
	}
	
	cout << potential_friend << endl; 
	    
    return 0;

}
