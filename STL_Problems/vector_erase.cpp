#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    
    vector<int> v; 
    int n; 
    cin >> n; 
    
    for(int i = 0; i < n; i++){
    	int x; cin >> x; 
    	v.push_back(x);
    }
    
   	int q1; cin >> q1; 
   	v.erase(v.begin() + q1 -1); 
   	
   	int l, r; cin >> l >> r; 
   	
   	v.erase(v.begin()+l-1, v.begin()+r-1); 
    
    cout << v.size() << endl; 
    for(int i = 0; i < v.size(); i++) cout << v[i] << " "; 
    cout << endl; 
    
    return 0;

}
