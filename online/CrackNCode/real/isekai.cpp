#include <bits/stdc++.h>
using namespace std;

const int N = 2e6+7;
int n, q;
string s, tmp;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> q;
  cin >> s;
  while(q--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    tmp = "";
    for(int i=a-1; i<b; i++) {
      tmp += s[i];
    }
    for(int i=c-1; i<d; i++) {
      tmp += s[i];
    }
    bool pp=true;
    for(int i=0; i<tmp.size()/2; i++) {
      if(tmp[i]!=tmp[tmp.size()-i-1]) {
        pp=false;
        break;
      }
    }
    if(pp) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }

  return 0;
}