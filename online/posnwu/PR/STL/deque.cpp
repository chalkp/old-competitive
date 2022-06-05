#include <bits/stdc++.h>
using namespace std;

deque<int> dq;

void solve() {
  int q;
  cin >> q;
  while(q--) {
    int op;
    cin >> op;
    switch(op) {
    case 1:
      int x;
      cin >> x;
      dq.push_front(x);
      break;
    case 2:
      int x;
      cin >> x;
      dq.push_back(x);
      break;
    case 3:
      dq.pop_front();
      if(dq.empty()) {
        cout << "-1" << ' ';
      } else {
        for(int i: dq) {
          cout << i << ' ';
        }
      }
      break;
    case 4:
      dq.pop_back();
      if(dq.empty()) {
        cout << "-1" << ' ';
      } else {
        for(int i: dq) {
          cout << i << ' ';
        }
      }
      break;
    case 5:
      sort(dq.begin(), dq.end());
      if(dq.empty()) {
        cout << "-1" << ' ';
      } else {
        for(int i: dq) {
          cout << i << ' ';
        }
      }
      break;
    case 6:
      reverse(dq.begin(), dq.end());
      if(dq.empty()) {
        cout << "-1" << ' ';
      } else {
        for(int i: dq) {
          cout << i << ' ';
        }
      }
      break;
    case 7:
      if(dq.empty()) {
        cout << "-1" << ' ';
      } else {
        for(int i: dq) {
          cout << i << ' ';
        }
      }
      break;
    case 8:
      if(dq.empty()) {
        cout << "-1" << ' ';
      } else {
        cout << dq.size() << ' ';
      }
      break;
    case 9:
      if(dq.empty()) {
        cout << "-1" << ' ';
      } else {
        cout << dq.front() << ' ';
      }
      break;
    case 10:
      if(dq.empty()) {
        cout << "-1" << ' ';
      } else {
        cout << dq.back() << ' ';
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
    while(!dq.empty()) {
      dq.pop_back();
    }
  }
  return 0;
}
