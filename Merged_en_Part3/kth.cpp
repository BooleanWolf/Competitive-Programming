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

int main(){
    
    int n, q;
    cin >> n >> q; 

    map<int, vector<int>> mp; 

    for(int i = 0; i < n; i++){

        int d;
        cin >> d;

        if(mp.count(d) == 0){
            vector<int> a{i+1}; 
            mp[d] = a; 
        }
        else{
            mp[d].push_back(i+1); 
        }

    }

           
    // for(auto k : mp){
    //     cout << k.first << endl;
    //     debug(k.second);
    // }


    while(q--){
        int k, l;
        cin >> k >> l;

        if(mp.count(k)){
            debug(mp[k]);
            if(mp[k].size() >= l){
                cout << mp[k][l-1] << endl; 
            }
            else{
                cout << -1 << endl;
            }
        }
        else{
            cout << -1 << endl;
        }
        
    }
 
}





