#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int sum=0, i=0, n=69420;
  while(n!=0) {
    cin >> n;
    sum += n;
    i++;
  }
  cout << sum/i << '\n';
  return 0;
}
