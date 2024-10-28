#include<bits/stdc++.h>
using namespace std;

// O(n)
int32_t main() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  queue<int> q;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += v[i];
    q.push(v[i]);
    if (i >= k - 1) {
      cout << sum << ' ';
      sum -= q.front();
      q.pop();
    }
  }
  cout << '\n';
  return 0;
}