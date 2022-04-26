#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+7;
int m, n;
int dia[N][N];
int MAX = 1-INT_MAX;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> m >> n;
  for(int i=1; i<=m; i++) {
    for(int j=1; j<=n; j++) {
      cin >> dia[i][j];
    }
  }
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=m; j++) {
      dia[j][i] += max(max(dia[j-1][i-1], dia[j][i-1]), dia[j+1][i-1]);
      if(i==n) {
        if(dia[j][i] > MAX) {
          MAX = dia[j][i];
        }
      }
    }
  }
  cout << MAX;
  return 0;
}
