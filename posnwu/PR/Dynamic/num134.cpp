#include <bits/stdc++.h>
using namespace std;

int n, coins[] = {1, 3, 4};
int dp[57];

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

  dp[0] = 1;
  for(int i=0; i<55; i++) {
    for(int j: coins) {
      if(j<=i) {
        dp[i] += dp[i-j];
      }
    }
  }
  cin >> n;
  cout << dp[n];
  return 0;
}