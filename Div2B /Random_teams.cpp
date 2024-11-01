#include <bits/stdc++.h>
using namespace std;


long long C(long long n) {
	return 1L * n * (n-1) / 2; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

  	long long n, m; cin >> n >> m; 
  	
	
	// minimum 
	
	long long even_dis = n / m; 
	long long left_dis = n % m; 
	
	long long coeff_even = m - left_dis; 
	
	long long min = coeff_even* C(even_dis) + left_dis * C(even_dis + 1);
	
	cout << min << " ";  
  	
  	
  	// maxmimum 
	
	long long dis = n - (m - 1); 
	long long max = C(dis);
	
	cout << max << "\n"; 
  	
  	
    return 0;

}
