#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int n, a, b, c, d, e, cake=0;
  std::cin >> n;
  for(int i=0; i<n; i++) {
    std::cin >> a >> b >> c >> d >> e;
    cake += 8*a + 6*b + 4*c + 2*d + e;
  }
  std::cout << cake/8+std::min(cake%8,1) << '\n';
  return 0;
}
