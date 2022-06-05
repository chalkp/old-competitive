#include <bits/stdc++.h>
using namespace std;

struct node {
  int x, y, level;
  bool operator < (const node &h) const {
    return h.level > level;
  }
};

int t;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> t;
  while(t--) {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0; i<n; i++) {
      for(int j=0; j<m; j++) {
        cin >> arr[i][j];
      }
    }
    priority_queue<node> prioq;
    prioq.push({0});
  }

  return 0;
}