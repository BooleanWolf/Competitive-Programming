#include<bits/stdc++.h>
using namespace std;

// O(n)
int32_t main() {
  string s;
  cin >> s;
  stack<char> st;
  for (auto x: s) {
    if (x == '(') {
      st.push(x);
    } else {
      if (st.empty()) {
        cout << "Not Balanced\n";
        return 0;
      }
      st.pop();
    }
  }
  if (st.empty()) {
    cout << "Balanced\n";
  } else {
    cout << "Not Balanced\n";
  }
  return 0;
}