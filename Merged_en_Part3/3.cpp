#include <bits/stdc++.h>
using namespace std;

void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
#ifndef ONLINE_JUDGE
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define debug(x...)
#endif

int main()
{
    int n, m, q;
    cin >> n >> m >> q; 
    vector<vector<int>> baskets(n);

    for(int i =n-1; i >= 0; i--){
        baskets[0].push_back(i); 
    } 

    while(q--){
        char s;
        long long int a, b; 
        cin >> s;
        cin >> a >> b; 

        if(s == 's'){
            baskets[b].insert(baskets[b].begin(), *baskets[a].begin()); 
            baskets[a].erase(baskets[a].begin());
        }
        else if(s=='c'){
            int pos = baskets[a].size() - 1 - b;
            if(pos < baskets[a].size()){
                cout << baskets[a][pos] << endl;
            }
            else{
                cout << -1 << endl; 
            }
            
        }

    }

    
    debug(baskets);


}