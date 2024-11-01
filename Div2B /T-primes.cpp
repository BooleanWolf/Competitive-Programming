#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000001;

bool prime[MAX];
void sieve ()
{
    int i,j;
    prime[0] = prime[1] = true;

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve(); 
    
    int n; cin >> n; 
    while(n--) {
    	long long int d, r; 
    	cin >> d; 
    	
    	r = sqrt(d); 
    	
    	if(!prime[r] && r*r == d) {
    		cout << "YES\n";  
    	}
    	else {
    		cout << "NO\n"; 
    	}
    }
    return 0;

}
