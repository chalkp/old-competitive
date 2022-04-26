#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+7;
int n, a[N], s, t, huakuy[N];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  cin >> t;
  while(t--) {
    memset(a, 0, N);
    memset(huakuy, 0, N);
    s=0;
    cin >> n;
    for(int i=0; i<n; i++) {
      cin >> a[i];
      s += a[i];
      huakuy[i] = s;
    }
    bool have = false;
    for(int i=n-1; i>-1; i--) {
      if(s-huakuy[i+1] == huakuy[i]) {
        cout << i+1 << '\n';
        have=true;
        break;
      }
    }
    if(!have) {
      cout << "-1" << '\n';
    }
  }

  return 0;
}