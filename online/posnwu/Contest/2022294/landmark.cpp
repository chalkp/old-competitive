#include <bits/stdc++.h>
using namespace std;

int arr[1007], w[1007];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  int n;
  cin >> n;
  for(int i=1; i<=n; i++) {
    cin >> w[i];
    arr[i] = max(w[i]+ arr[max(0, i-2)], arr[i-1]);
  }
  int q;
  cin >> q;
  while(q--) {
    int k;
    cin >> k;
    if(lower_bound(arr+1, arr+1+n, k) - arr > n) {
      cout << '0' << '\n';
    } else {
      cout << lower_bound(arr+1, arr+1+n, k) - arr << '\n';
    }
  }

  return 0;
}