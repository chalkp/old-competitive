#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O2")
const int N = 1e5+7, lowest = 69420-0x7fffffff;
int q, n, pa[N];

bool vst[N];

int compo(int x, int cnt) {
  if(vst[x]) {
    return cnt;
  }
  vst[x] = true;
  return compo(pa[x], cnt+1);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> q;
  while(q--) {
    cin >> n;
    int maxi=lowest;
    memset(vst, 0, N);
    for(int i=1; i<=n; i++) {
      cin >> pa[i];
    }
    for(int i=1; i<=n; i++) {
      if(!vst[i]) {
        int current = compo(i, 0);
        if(current==1) {
          maxi = max(maxi, 1);
        } else if(current&1) {
          maxi = max(maxi, 3);
        } else {
          maxi = max(maxi, 2);
        }
      }
    }
    cout << maxi << '\n';
  }

  return 0;
}