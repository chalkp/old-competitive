#include <bits/stdc++.h>
using namespace std;

const int N = 57;
string s[N];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  s[1] = "A";
  s[2] = "B";
  for(int i=1; i<51; i++) {
    s[i+2] = s[i] + s[i+1];
  }
  int t;
  cin >> t;
  while(t--) {
    int a, b;
    cin >> a >> b;
    cout << s[a][b];
  }

  return 0;
}