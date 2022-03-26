#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int a;
  cin >> a;
  if(a<50) {
    cout << 'F' << '\n';
  } else if(a<80) {
    cout << 'P' << '\n';
  } else {
    cout << 'G' << '\n';
  }
  return 0;
}
