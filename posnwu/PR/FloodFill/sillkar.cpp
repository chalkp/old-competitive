#include <bits/stdc++.h>
using namespace std;

struct node {
  int x, y, level;
  char type;
};

queue<node> q;
int n, m;

bool __valid(int x, int y) {
  if(x<0 || x>=m || y<0 || y>=n) {
    return false;
  }
  return true;
}

void flood() {
  while(!q.empty()) {
    node c = q.front();
    q.pop();
    if(c.type == '*') {
      
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> m;
  char arr[n][m];
  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      cin >> arr[i][j];
      if(arr[i][j] == '*') {
        q.push({i, j, 0, '*'});
      }
    }
  }

  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      if(arr[i][j] == 'S') {
        q.push({i, j, 0, 'S'});
      }
    }
  }

  return 0;
}
