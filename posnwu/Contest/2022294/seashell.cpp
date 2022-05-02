#include <bits/stdc++.h>
using namespace std;

struct loc {
  long long pos, val;
  bool operator < (const loc &p) const {
    return pos < p.pos;
  }
};

vector<loc> s;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  int n, q;
  cin >> n >> q;
  long long l, x, a, b;
  long long sum=0;
  while(n--) {
    cin >> l >> x;
    s.push_back({l, x});
  }
  sort(s.begin(), s.end());
  while(q--) {
    sum = 0;
    cin >> a >> b;
    for(loc i: s) {
      if(a <= i.pos && i.pos <= b) {
        sum+=i.val;
      }
      if(b < i.pos) break;
    }
    cout << sum << '\n';
  }

  return 0;
}