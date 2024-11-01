#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase; 
    
    while(testcase--){
    	int n, k;
    	cin >> n >> k;
    	
    	if(n== 1 && k == 1) {
    		cout << 1 << endl;
    		cout << 1 << endl; 
    		continue; 
    	} 
    	
    	int partition = 0; 
    	
    	if((n - k)%2 != 0 && (k-1)%2!=0) {
    		partition = 3; 
    	}
    	else if((n-k)%2==0 && (n-k)>= 2 && (k-1)%2==0 && (k-1)>=2){
    		partition = 5;
    	}
    	else {
    		partition = 0; 
    	}
    	
    	if(partition == 3) {
    		cout << partition << endl;
    		cout << 1 << " " << k << " " << k + 1 << endl; 
    	}
    	else if(partition == 5) {
    		cout << partition << endl; 
    		cout << 1 << " "<< 2 << " " << k << " " << k + 1 << " " << k + 2 << endl; 
    	}
    	else {
    		cout << -1 << endl; 
    	}
    	
     	
    	
    	
    }
    return 0;

}
