#include<bits/stdc++.h>
using namespace std;

// O(nlogn)
int32_t main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  multiset<int> se;
  for (int i = 0; i < n; i++) {
    se.insert(a[i]);
  }
  for (int i = 0; i < m; i++) {
    auto it = se.find(b[i]);
    if (it != se.end()) {
      se.erase(it);
    }
  }
  cout << se.size() << '\n';
  return 0;
}