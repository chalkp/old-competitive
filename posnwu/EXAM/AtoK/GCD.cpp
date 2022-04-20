#include <bits/stdc++.h>
using namespace std;

int n, g[107], MAX=0;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> g[i];
    for(int j=0; j<i; j++) {
      MAX = max(MAX, __gcd(g[i], g[j]));
    }
  }
  cout << MAX;

  return 0;
}