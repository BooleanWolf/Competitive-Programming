#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int test_cases; cin >> test_cases;
  while (test_cases--) {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    map<int, int> frequency;
    for (int i = 0; i < n; i++) {
      frequency[a[i]]++;
    }
    priority_queue<pair<int, int>> pq;
    // for (auto elements: frequency) {
    //   int val = elements.first, cnt = elements.second;
    //   pq.push(make_pair(cnt, val));
    // }
    for (auto [val, cnt]: frequency) {
      pq.push(make_pair(cnt, val));
    }
    int alive = n;
    while (pq.size() > 1) { // as long as we have two distinct values
      auto [cnt1, val1] = pq.top();
      pq.pop();
      auto [cnt2, val2] = pq.top();
      pq.pop();
      // do the operation
      cnt1--;
      cnt2--;
      alive -= 2;
      if (cnt1 > 0) pq.push(make_pair(cnt1, val1));
      if (cnt2 > 0) pq.push(make_pair(cnt2, val2));
    }
    cout << alive << '\n';
  }
  return 0;
}

// O(n logn)