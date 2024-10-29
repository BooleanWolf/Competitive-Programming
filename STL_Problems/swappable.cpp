#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n; cin >> n; 
    long long v[n]; 
    
    for(long long i = 1; i <= n; i++) {
    	cin >> v[i]; 
    }
    
    map<long long, long long> cnt; 
    long long ans = 0; 
    
    for(long long j = 1; j <= n; j++) {
    	ans += j - 1 - cnt[v[j]];
    	cnt[v[j]]++;  
    }
    
    cout << ans << endl; 
    
    
    
    
    return 0;

}
 