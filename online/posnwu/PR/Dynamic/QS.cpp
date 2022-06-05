#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int n, a[N], q, l, r;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> a[i];
    if(i!=0) {
      a[i]+=a[i-1];
    }
  }
  cin >> q;
  while(q--) {
    cin >> l >> r;
    cout << a[r]-a[l-1] << '\n';
  }

  return 0;
}