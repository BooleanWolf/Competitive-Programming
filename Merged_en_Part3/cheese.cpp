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
    long long int n, w;
    cin >> n >> w; 

    vector<pair<long long int, int>> cheese; 


    for(int i = 0; i < n; i++){
        long long int a, b;
        cin >> a >> b;

        cheese.push_back({a, b}); 
    }

    sort(cheese.begin(), cheese.end()); 
    reverse(cheese.begin(), cheese.end());

    debug(cheese); 
    long long int del = 0; 

    int i = 0; 

    while(w>0){

        if(i==cheese.size())
            break; 

        if(cheese[i].second <= w){
            del += cheese[i].first * cheese[i].second; 
            w -= cheese[i].second;
        }
        else {
            del += cheese[i].first * w; 
            w -= w;
        }
        
    
        debug(del, cheese[i]); 


        i += 1; 
        

        debug(w); 

    }


    cout << del << endl; 





}