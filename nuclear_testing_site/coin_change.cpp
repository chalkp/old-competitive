#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7, inf = 2e9;

int in, coin[N], coins[N], b, c;

void dp() {
  for(int i=0; i<b; i++) {
    coin[coins[i]] = 1;
  }
  for(int i=1; i<=in; i++) {
    for(int j=0; i<b; i++) {
      if(coins[j]+i <= in) {
        coin[coins[j]+i] = min(coin[coins[j]+1], coin[i]+1);
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  
  cin >> in >> b >> c;
  for(int i=0; i<b; i++) {
    cin >> coins[i];
  }
  for(int i=0; i<=in; i++) {
    coin[i] = inf;
  }

  dp();

  cout << coin[in];

  return 0;
}