#include <bits/stdc++.h>
using namespace std;

int t, a, b;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  
  cin >> t;
  while(t--) {
    cin >> a >> b;
    string str1, str2;
    cin >> str1;
    cin >> str2;
    long long int lcs[a+7][b+7];
    memset(lcs, 0, sizeof(lcs));
    for(int i=1; i<=a; i++) {
      for(int j=1; j<=b; j++) {
        if(str1[i-1] == str2[j-1]) {
          lcs[i][j] = max(max(lcs[i-1][j], lcs[i][j-1]),lcs[i-1][j-1]+1);
        } else {
          lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
        }
      }
    }
    cout << lcs[a][b] << '\n';
  }

  return 0;
}