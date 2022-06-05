#include <bits/stdc++.h>
using namespace std;

int t, a, b, c, x, y;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> t;
  while(t--) {
    cin >> a >> b >> c >> x >> y;
    a-=x;
    b-=y;
    if(a<0) {
      c+=a;
    }
    if(b<0) {
      c+=b;
    }
    if(c<0) {
      cout << "NO";
    } else {
      cout << "YES";
    }
    cout << '\n';
  }

  return 0;
}