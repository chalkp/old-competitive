#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+69;
int a[N], b[N], dp[N][2], n, m, k, cnt, mini;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> m >> k;
  for(int i=1; i<=n; i++) {
    cin >> a[i];
  }
  for(int i=1; i<=m; i++) {
    cin >> b[i];
  }
  for(int i=0; i<=n; i++) {
    dp[i][1] = 0x77ffffff;
    dp[i][0] = 0x77ffffff;
  }
  dp[0][1] = 0;
  int c=1, p, cont=0;
  for(int i=1; i<=m; i++) {
    p=c;
    c = 1-c;
    mini = 0x77ffffff;
    cnt = 0x77ffffff;
    for(int j=0; j<=n; j++) {
      dp[j][c] = 0x77ffffff;
    }
    for(int j=1; j<=n; j++) {
      if(a[j]==b[i]) {
        dp[j][c] = min(dp[j][p]+1, min(dp[j-1][p], mini+1));
      } else {
        dp[j][c] = min(dp[j][p]+1, min(dp[j-1][p]+1, mini+2));
      }
      cnt=min(dp[j][c], cnt);
      mini=min(dp[j-1][p],mini);
    }
    if(cnt>k) {
      break;
    }
    cont++;
  }
  cout << cont;

  return 0;
}