#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
int32_t main() {
  int n, k;
  cin >> n >> k;
  vector<string> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  bitset<N> bs[n];
  for (int i = 0; i < n; i++) {
    bs[i] = bitset<N>(v[i]);
  }
  int ans = 0;
  // Total O(n^3 / 64)
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if ((bs[i] ^ bs[j]).count() <= k) {
        ans++;
      }
    }
  }
  cout << ans << '\n';
  return 0;
}