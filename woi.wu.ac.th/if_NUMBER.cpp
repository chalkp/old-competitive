#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int a;
  cin >> a;
  if(a==0) {
    cout << "ZERO NUMBER" << '\n';
  } else if(a<0) {
    cout << "NEGATIVE NUMBER" << '\n';
  } else {
    cout << "POSITIVE NUMBER" << '\n';
  }
  return 0;
}
