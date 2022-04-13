#include <bits/stdc++.h>
using namespace std;

const int N=1e3+7;
int t, n, w, value[N], weight[N];

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  cin >> t;
  while(t--) {
    cin >> n;
    cin >> w;
    for(int i=0; i<n; i++) {
      cin >> value[i];
    }
    for(int i=0; i<n; i++) {
      cin >> weight[i];
    }
    
  }
  return 0;
}