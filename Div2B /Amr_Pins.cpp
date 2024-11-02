#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

   	double r, x, y, xp, yp; cin >> r >> x >> y >> xp >> yp; 
   	double distance = sqrt((x-xp)*(x-xp) + (y-yp) * (y-yp)); 
   	r *= 2; 
   	int ans = ceil(distance/r); 
   	cout << ans << endl; 
    return 0;

}
