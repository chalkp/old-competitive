#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
long long int n, q, a[N];

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

  cin >> n >> q;
  for(int i=1; i<=n; i++) {
    cin >> a[i];
    a[i]+=a[i-1];
  }
  for(int i=0; i<q; i++) {
    int h, b;
    cin >> h >> b;
    cout << a[b]-a[h-1] << '\n';
  }

  return 0;
}