#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int a[N], n;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  
  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> a[i];
  }
  sort(a, a+n, [](int x, int y){return x>y;});
  for(int i=0; i<n; i++) {
    cout << a[i] << ' ';
  }

  return 0;
}
