#include <bits/stdc++.h>
using namespace std;

int t;
stack<int> s;
string st;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> t;
  while(t--) {
    cin >> st;
    if(st[0] <= '9' && st[0] >= '0') {
      int x = stoi(st);
      s.push(x);
    } else if(st[0] == '-') {
      int x = s.top();
      s.pop();
      x += s.top();
      s.pop();
      s.push(x);
    } else {
      int x = s.top();
      s.pop();
      int y = s.top();
      s.pop();
      y -= x;
      s.pop();
      s.push(y);
    }
  }
  cout << s.top();

  return 0;
}