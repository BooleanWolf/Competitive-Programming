#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int q; cin >> q;
  map<string, string> owner;
  while (q--) {
    string old_username, new_username;
    cin >> old_username >> new_username;

    if (owner.find(old_username) == owner.end()) {
      owner[new_username] = old_username;
    }
    else {
      owner[new_username] = owner[old_username];
      owner.erase(old_username);
    }
  }
  cout << owner.size() << '\n';
  for (auto [username, owner_name]: owner) {
    cout << owner_name << ' ' << username << '\n';
  }
  return 0;
}