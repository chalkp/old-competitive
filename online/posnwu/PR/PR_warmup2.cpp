#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  unsigned long long int n;
  cin >> n;
  n = n%(unsigned long long int)(1e9+7);
  n = n*n;
  cout << n%(unsigned long long int)(1e9+7);

  return 0;
}
