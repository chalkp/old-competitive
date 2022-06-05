#include <bits/stdc++.h>
using namespace std;

int x;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  cin >> x;
  for(int i=1; i<=x; i++) {
    for(int j=1; j<=x; j++) {
      if(i==1 || i==x || j==1 || j==x || i==j || i==x-j+1) {
        cout << '*';
      } else {
        cout << '-';
      }
    }
    cout << '\n';
  }

  return 0;
}