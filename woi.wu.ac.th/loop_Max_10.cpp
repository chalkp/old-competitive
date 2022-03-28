#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int i, m=-1234567, n;
  cin >> i;
  while(i--) {
    cin >> n;
    if(m<n) {
      m=n;
    }
  }
  cout << m;
  return 0;
}
