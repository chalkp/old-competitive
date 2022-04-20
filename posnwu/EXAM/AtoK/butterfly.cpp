#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int n;
  cin >> n;
  for(int i=0; i<n; i++) {
    for(int j=0; j<2*n-1; j++) {
      if(j<=i || 2*n-2-j<=i) {
        cout << '*';
      } else {
        cout << ' ';
      }
    }
    cout << '\n';
  }
  for(int i=n-1; i>=1; i--) {
    for(int j=2*n-2; j>=0; j--) {
      if(j<=i-1 || 2*n-1-j<=i) {
        cout << '*';
      } else {
        cout << ' ';
      }
    }
    cout << '\n';
  }
  return 0;
}