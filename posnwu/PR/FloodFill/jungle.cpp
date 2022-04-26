#include <bits/stdc++.h>
using namespace std;

struct coor {
  int x, y;
};

queue<coor> q;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  cin >> n;
  char area[n][n];
  bool vst[n][n] = {false};
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      cin >> area[i][j];
      if(area[i][j] == 'S') {
        q.push({i, j});
      }
    }
  }
  int len=0;
  while(!q.empty()) {
    coor c = q.front();
    q.pop();
    if(area[c.x][c.y] == 'E') {
      break;
    }
  }

  return 0;
}