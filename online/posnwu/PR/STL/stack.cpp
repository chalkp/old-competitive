#include <bits/stdc++.h>
using namespace std;

stack<int> s;

void solve() {
  int q;
  cin >> q;
  while(q--) {
    char op;
    cin >> op;
    switch(op) {
    case 'a':
      int x;
      cin >> x;
      s.push(x);
      break;
    case 'b':
      if(s.empty()) {
        cout << "-1" << ' ';
      } else {
        cout << s.top() << ' ';
        s.pop();
      }
      break;
    case 'c':
      cout << s.size() << ' ';
      break;
    case 'd':
      if(s.empty()) {
        cout << "-1" << ' ';
      } else {
        cout << s.top() << ' ';
      }
      break;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int t;
  cin >> t;
  while(t--) {
    solve();
    cout << '\n';
    while(!s.empty()) {
      s.pop();
    }
  }
  return 0;
}
