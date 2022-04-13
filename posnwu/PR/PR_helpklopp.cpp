#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, owo=0;
  cin >> n;
  while(n--) {
    owo += n*(n-1)/2;
  }
  cout << owo;

  return 0;
}
