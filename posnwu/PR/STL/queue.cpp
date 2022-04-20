#include <bits/stdc++.h>
using namespace std;
queue<int> qu;

void solve() {
  int q;
  cin >> q;
  while(q--) {
    char op;
    cin >> op;
    switch(op) {
    case 'a':
      int a;
      cin >> a;
      qu.push(a);
      break;
    case 'b':
      if(!qu.empty()) {
        cout << qu.front() << ' ';
        qu.pop();
      } else {
        cout << '1' << ' ';
      }
      break;
    case 'c':
      cout << qu.size() << ' ';
      break;
    case 'd':
      if(qu.empty()) {
        cout << '1' << ' ';
      } else {
        cout << qu.front() << ' ';
      }
      break;
    case 'e':
      if(qu.empty()) {
        cout << '1' << ' ';
      } else {
        cout << qu.back() << ' ';
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
    while(!qu.empty()) {
      qu.pop();
    }
  }
  return 0;
}
