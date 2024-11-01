#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	queue<int> q1, q2; 
	int n; cin >> n; 
	
	int k; cin >> k; 
	while(k--){
		int d; cin >> d; 
		q1.push(d); 
	}
	int m; cin >> m; 
	while(m--) {
		int d; cin >> d; 
		q2.push(d); 
	}
	
	int count = 0; 
	while(1) {
		int c1 = q1.front();
		q1.pop();  
		int c2 = q2.front();
		q2.pop();  
		
		if(c1 > c2) {
			q1.push(c2); 
			q1.push(c1); 
		}
		else {
			q2.push(c1); 
			q2.push(c2); 
		}
		
		count += 1;
		
		if(count > 100000) {
			cout << -1 << endl; 
			break;
		}
		
		if(q1.empty()) {
			cout << count << " 2" << "\n"; break; 
		}
		if(q2.empty()) {
			cout << count << " 1" << "\n"; break; 
		}
		
		
	}
	
	
    return 0;

}
