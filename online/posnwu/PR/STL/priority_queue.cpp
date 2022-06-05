#include <bits/stdc++.h>
using namespace std;
priority_queue<int> prioq;
queue<int> que;

void solve() {
  int q;
  cin >> q;
  while(q--) {
    char op;
    cin >> op;
    switch(op) {
    case '1':
      int x;
      cin >> x ;
      prioq.push(x);
      while(!prioq.empty()){
        cout << prioq.top() << ' ';
        que.push(prioq.top());
        prioq.pop() ;
      }
      while(!que.empty()){
        prioq.push(que.front());
        que.pop() ;
      }
      cout << '\n' ;
      break;
    case '2':
      if(prioq.empty()) {
        cout << "-1" << ' ';
      } else {
        cout << prioq.top() << ' ';
        prioq.pop();
      }
      break;
    case '3':
      if(prioq.empty()) {
        cout << "-1" << ' ';
      } else {
        cout << prioq.top() << ' ';
      }
      break;
    case '4':
      if(prioq.empty()) {
        cout << "-1" << ' ';
      } else {
        cout << prioq.size() << ' ';
      }
      break;
    case '5':
      while(!prioq.empty()) {
        cout << prioq.top() << ' ';
        que.push(prioq.top());
        prioq.pop();
      }
      while(!que.empty()){
        prioq.push(que.front());
        que.pop() ;
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
    while(!prioq.empty()) {
      prioq.pop();
    }
  }
  return 0;
}
