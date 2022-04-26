#include <bits/stdc++.h>
using namespace std;

const int N = 1e2+7;
const int mod = 1e9+7;

int m, n, t;
long long int pascal[N][N];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  for(int i=0; i<N; i++) {
    pascal[i][0] = 1;
    pascal[0][i] = 1;
  }
  for(int i=0; i<105; i++) {
    for(int j=0; j<105; j++) {
      pascal[i+1][j+1] = pascal[i+1][j] + pascal[i][j+1];
      pascal[i+1][j+1] %= mod;
    }
  }
  cin >> t;
  while(t--) {
    cin >> m >> n;
    cout << pascal[m-1][n-1] << '\n';
  }
  

  return 0;
}