#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        int n; 
        cin >> n;

        vector<int> v; 
        int ones = 0; 
        for (int i = 0; i < 2 * n; i++) {
            int d;
            cin >> d; 
            if (d == 1) ones++;
        } 
        
        if(ones == 2*n) {
        	cout << 0 << " " << 0 << endl; 
        	continue;
        }
        
        // maximum 
        int max = 0; 
        if(ones <= n){
        	max = ones; 
        }
        else {
        	int extra = ones % n; 
        	max = n - extra; 
        }
        
        // minimum 

        
        int l_2 = ones % 2; 
        
        cout << l_2 << " " << max << endl; 
        
    }
    return 0;
}
