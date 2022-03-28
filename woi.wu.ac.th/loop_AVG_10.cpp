#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  double sum=0, n;
  int i=10;
  while(i--) {
    cin >> n;
    sum += n;
  }
  cout << sum/10;
  return 0;
}
