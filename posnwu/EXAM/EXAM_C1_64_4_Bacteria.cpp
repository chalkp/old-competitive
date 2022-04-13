#include <bits/stdc++.h>
using namespace std;

int n, d=0;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n;
  while(n) {
    if(n&1) {
      d++;
    }
    n>>=1;
  }
  cout << d;

  return 0;
}