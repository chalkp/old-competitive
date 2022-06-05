#include <bits/stdc++.h>
using namespace std;

int n, m, q;
int li[120007][240007];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> m >> q;
  for(int i=0; i<m; i++) {
    int l;
    cin >> l;
    for(int j=0; j<l; j++) {
      cin >> li[i][j];
    }
  }
  while(q--) {
    int mode;
    cin >> mode;
    if(!(mode-1)) {
      int x, y;
      cin >> x >> y;
    }
  }

  return 0;
}