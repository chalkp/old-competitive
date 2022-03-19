#include <bits/stdc++.h>
using namespace std;
const int N = 5e4+5;
bool pattern[75][N];
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n, p, q, r, pr=0;
  cin >> n;
  while(n--) {
    cin >> p >> q >> r;
    if(p > pr) {
      pr = p;
    }
    for(int i=q; i<r+q; i++) {
      pattern[i][p] = true;
    }
  }
  for(int i=1; i<=pr; i++) {
    for(int j=1; j<=70; j++) {
      pattern[j][i]? cout << 'x' : cout << 'o';
    }
    cout << '\n';
  }
  return 0;
}
