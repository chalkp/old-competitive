#include <bits/stdc++.h>
using namespace std;

struct coor {
  int x, y, cunt;
  bool operator < (const coor &i) const {
    return i.cunt < cunt;
  }
};


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  int n, x, y;
  cin >> n;
  bool vst[n][n];
  char arr[n][n];
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      cin >> arr[i][j];
      if(arr[i][j] == 'S') {
        x = i;
        y = j;
      }
    }
  }
  priority_queue<coor> q;
  q.push({x, y, 0});
  vst[x][y] = true;
  for(;;) {
    coor c = q.top();
    q.pop();
    vst[c.x][c.y] = true;
    if(arr[c.x][c.y] == 'E') {
      cout << c.cunt;
      return 0;
    }
    if(c.x > 0) {
      if(arr[c.x-1][c.y] != 'T') {
        q.push({c.x-1, c.y, c.cunt+1});
      }
    }
    if(c.y > 0) {
      if(arr[c.x][c.y-1] != 'T') {
        q.push({c.x, c.y-1, c.cunt+1});
      }
    }
    if(c.x < n-1) {
      if(arr[c.x+1][c.y] != 'T') {
        q.push({c.x+1, c.y, c.cunt+1});
      }
    }
    if(c.y < n-1) {
      if(arr[c.x][c.y+1] != 'T') {
        q.push({c.x, c.y+1, c.cunt+1});
      }
    }
  }

  return 0;
}