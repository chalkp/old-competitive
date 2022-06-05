#include <bits/stdc++.h>
using namespace std;

int q, n, cunt[1000007];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> q >> n;
  while(n--) {
    int m, s, p;
    cin >> m >> s >> p;
    for(int i=s; i<=p; i++) {
      cunt[i] += m;
    }
  }
  while(q--) {
    int h;
    cin >> h;
    cout << cunt[h] << '\n';
  }
  
  return 0;
}