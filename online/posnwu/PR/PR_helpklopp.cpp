#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long int n, owo=0;
  cin >> n;
  for(int i=1; i<=n; i++) {
    owo += i*(i+1)/2;
  }
  cout << owo;

  return 0;
}
