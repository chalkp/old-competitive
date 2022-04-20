#include <bits/stdc++.h>
using namespace std;

int sum=0, n;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  cin >> n;
  for(int i=1; i<n; i++) {
    for(int j=i+1; j<=n; j++) {
      sum += __gcd(i, j);
    }
  }
  cout << sum;
  return 0;
}