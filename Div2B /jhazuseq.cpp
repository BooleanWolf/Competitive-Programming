#include <bits/stdc++.h>
using namespace std;

int MOD = 1000000007;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

   	long long int a, b, t;
    cin >> a >> b >> t;
    long long int s[] = {a, b, b - a, -a, -b, a - b};
    cout << (s[(t - 1) % 6] % MOD + MOD) % MOD << endl;
    return 0;
    

}
