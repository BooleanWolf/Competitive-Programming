#include <bits/stdc++.h>
using namespace std;


long long compute_hash(string const& s){
    const int p = 31; 
    const int m = 1e9 + 9; 
    long long hash_value  = 0; 
    long long p_pow  = 1; 

    for(char c : s){
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m; 
        p_pow = (p_pow * p) % m; 
    }

    return hash_value; 
}

vector<vector<int>> group_identical_strings(vector<string> const& s){
    int n = s.size(); 
    vector<pair<long long, int>> hashes(n); 

    for(int i = 0; i < n; i++)
        hashes[i] = {compute_hash(s[i]), i}; 

    sort(hashes.begin(), hashes.end());

    for(int i = 0; i < n; i++){
        cout << hashes[i].first << " Index:- " << hashes[i].second << endl; 
    } 

    vector<vector<int>> groups; 

    for(int i = 0; i < n; i++){
        if(i==0 || hashes[i].first != hashes[i-1].first)
            // Basically ekhane jodi first item hoy othoba mismatch pay taile vector e ekta empty vector add kortese
            groups.emplace_back(); 

        // ei part e recent je group banano hyse sekhane value add kortese 
        groups.back().push_back(hashes[i].second); 
    }

    return groups; 

}

int main()
{
    vector<string> v;
    v.push_back("Hello"); 
    v.push_back("Tamim"); 
    v.push_back("Tamim");
    v.push_back("Hello"); 

    vector<vector<int>> groups = group_identical_strings(v); 

    for(int i = 0; i < groups.size(); i++){
        cout << "Group - : " << endl; 
        for(int j = 0; j < groups[i].size(); j++){
            cout << groups[i][j] << " "; 
        }
        cout << endl; 
    }

    cout << compute_hash("Tamim") << endl; 


  return 0;
}