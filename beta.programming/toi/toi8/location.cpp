#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+7;
int m, n, k;
int coor[N][N];
int MAX = 1-0x7fffffff;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  cin >> m >> n;
  cin >> k;
  for(int i=1; i<=m; i++) {
    for(int j=1; j<=n; j++) {
      cin >> coor[i][j];
      coor[i][j] += coor[i-1][j] + coor[i][j-1] - coor[i-1][j-1];
    }
  }
  for(int i=k; i<=m; i++) {
    for(int j=k; j<=n; j++) {
      MAX = max(coor[i][j] + coor[i-k][j-k] - coor[i][j-k] - coor[i-k][j], MAX);
    }
  }
  cout << MAX;



  return 0;
}