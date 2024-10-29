// solution when only () is allowed
// #include<bits/stdc++.h>
// using namespace std;

// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   string s; cin >> s;
//   stack<char> st;
//   for (char c: s) {
//     if (c == '(') {
//       st.push(c);
//     }
//     else {
//       if (st.empty()) {
//         cout << "No\n";
//         return 0;
//       }
//       else {
//         st.pop();
//       }
//     }
//   }
//   if (st.empty()) {
//     cout << "Yes\n";
//   }
//   else {
//     cout << "No\n";
//   }
//   return 0;
// }

#include<bits/stdc++.h>
using namespace std;

bool is_valid(char open, char close) {
  if (open == '(') return close == ')';
  else if (open == '{') return close == '}';
  else return close == ']';
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int test_cases; cin >> test_cases;
  while (test_cases--) {
    string s; cin >> s;
    stack<char> st;
    bool ok = true;
    for (char c: s) {
      if (c == '(' or c == '{' or c == '[') { // opening
        st.push(c);
      }
      else { // closing
        if (st.empty()) {
          ok = false;
          break;
        }
        else {
          char close = c;
          char open = st.top();
          st.pop();
          if (!is_valid(open, close)) {
            ok = false;
            break;
          }
        }
      }
    }
    if (!st.empty()) {
      ok = false;
    }
    if (ok) {
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }
  }
  return 0;
}

// O(test_cases * s.size())