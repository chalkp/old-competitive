#include <bits/stdc++.h>
using namespace std;

template<typename type>

long double multiply(type a, type b) {
  return a * b;
}
long double x, y;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  cin >> x >> y;
  cout << fixed << setprecision(2) << multiply(x, y) << '\n';

  return 0;
}