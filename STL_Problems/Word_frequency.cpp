#include<bits/stdc++.h>
using namespace std;

// O(nlogn) where n is the size of the string
// remember that in a map where the key is a string, the time complexity
// is O(nlogn) where n is the sum of the lengths of all the strings
int32_t main() {
  string s;
  getline(cin, s);
  stringstream ss(s);
  string word;
  map<string, int> mp;
  while (ss >> word) {
    mp[word]++;
  }
  for (auto x: mp) {
    cout << x.first << ' ' << x.second << '\n';
  }
  return 0;
}