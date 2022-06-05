#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b) {
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
  long long int a, b;
  cin >> a >> b;
  cout << a*b / gcd(a, b) << '\n';
  return 0;
}
