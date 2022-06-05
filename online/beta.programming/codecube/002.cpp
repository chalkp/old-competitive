#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if(a == 0) {
    return b;
  } else {
    return gcd(b%a, a);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int a, b;
  cin >> a >> b;
  cout << gcd(a, b) << '\n';
  return 0;
}
