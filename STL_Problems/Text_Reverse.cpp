#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  cin.ignore();
  while (t--) {
    string s;
    getline(cin, s);
    int n = s.size();
    string word = "";
    for (int i = 0; i < n; i++) {
      if (s[i] == ' ') {
        reverse(word.begin(), word.end());
        cout << word;
        word = "";
        cout << ' ';
      }
      else {
        // word.push_back(s[i]);
        word += s[i];
      }
    }
    reverse(word.begin(), word.end());
    cout << word;
    cout << '\n';
  }
  return 0;
}