#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+7;

struct item {
  int val, wt;
};

int t, n, w;

void solve() {
  cin >> n >> w;
  item items[N];
  int dp[N];
  for(int i=0; i<n; i++) {
    cin >> items[i].val;
  }
  for(int i=0; i<n; i++) {
    cin >> items[i].wt;
  }
  for(int i=0; i<n; i++) {
    for(int j=w; j>=0; j--) {
      if(items[i].wt <= j) {
        dp[j] = max(dp[j], dp[j-items[i].wt]+items[i].val);
      }
    }
  }
  int m=0;
  for(int i: dp) {
    m = max(i, m);
  }
  cout << m << '\n';
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
