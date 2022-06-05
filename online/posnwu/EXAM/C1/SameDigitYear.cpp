#include <bits/stdc++.h>
using namespace std;

int t, st, en;

void solve() {
  cin >> st >> en;
  int cunt=0, m=0;
  for(int i=st; i<=en; i++) {
    int current = i;
    bool digit[10] = {false}, dub = false;
    while(current) {
      int dig = current%10;
      if(digit[dig]) {
        dub = true;
        current = -1;
        break;
      }
      digit[dig] = true;
      current /= 10;
    }
    if(dub) {
      cunt++;
      m = max(cunt, m);
    } else {
      cunt = 0;
    }
  }
  cout << m << '\n';
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  
  cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}