#include <bits/stdc++.h>
using namespace std;

void fn(double a , double b) {
  if (a == b) cout << a << " equal " << b ;
  else if (a > b) cout << a << " greater than " << b ;
  else if (a < b) cout << a << " less than " << b ;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  double a , b;
  cin >> a >> b;
  fn(a, b);

  return 0;
}
