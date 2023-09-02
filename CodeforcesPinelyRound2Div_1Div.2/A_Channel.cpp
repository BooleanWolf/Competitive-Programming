// time-limit: 1000
// problem-url: https://codeforces.com/contest/1863/problem/A
#include <bits/stdc++.h>
using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

void solve() {
    int n, a, q;
    cin >> n >> a >> q;
     
    string s;
    cin >> s;

    int state = a;
    int state2 = a;  

    if(n == a){
        cout << "YES" << endl;
        return; 
    }

    for(char c : s){
        debug(c); 
        if(c == '-'){
            state2 -= 1;
            debug(state, state2); 
        }
        if(c == '+'){
            state += 1;
            state2 += 1; 
            debug(state, state2 );
        }
    }

    if(state >= n and state2 >= n){
        cout << "YES" << endl;
    }
    else if ((state >= n and state2 < n) or (state < n and state2 >= n)){
        cout << "MAYBE" << endl; 
    }
    else {
        cout << "NO" << endl; 
    }

    // debug(state); 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}