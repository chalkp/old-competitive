#include <bits/stdc++.h>
using namespace std;

const int N = 1e2+7, M = 1e4+7;
int n, m, k, arr[N][M];

struct slide {
  int val, idx;
};

deque<slide> dq;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> m >> k;
  for(int i=n-1; i>=0; i--) {
    for(int j=0; j<m; j++) {
      cin >> arr[i][j];
    }
  }
  for(int i=0; i<n; i++) {
    dq.clear();
    for(int j=0; j<=k; j++) {
      while(!dq.empty() && dq.back().val < arr[i][j]) {
        dq.pop_back();
      }
      dq.push_back({arr[i][j], j});
    }
    arr[i+1][0] += dq.front().val;

    for(int j=1; j<m; j++) {
      if(j>=k) {
        while(!dq.empty() && dq.front().idx < j-k) {
          dq.pop_front();
        }
      }
      if(j+k < m) {
        while(!dq.empty() && dq.back().val < arr[i][j+k]) {
          dq.pop_back();
        }
        dq.push_back({arr[i][j+k], j+k});
      }
      arr[i+1][j] += dq.front().val;
    }
  }
  int MAX = 1-0x7fffffff;
  for(int i=0; i<m; i++) {
    MAX = max(MAX, arr[n-1][i]);
  }
  cout << MAX;
  return 0;
}