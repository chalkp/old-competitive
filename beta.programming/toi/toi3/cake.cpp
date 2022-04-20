#include <bits/stdc++.h>
using namespace std;

int n, a, b, c, d, e, cake=0;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  cin >> n;
  while(n--) {
    cin >> a >> b >> c >> d >> e;
    cake += 8*a + 6*b + 4*c + 2*d + e;
  }
  cout << cake/8+min(cake%8,1) << '\n';
  return 0;
}
