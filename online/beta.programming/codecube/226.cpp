#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
int n, q, sticker[N], s, a, e, b;
bool visited[N];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> q;
  for(int i=1; i<=n; i++) {
    cin >> sticker[i];
  }
  for(int i=1; i<=n; i++) {
    if(visited[i]) {
      continue;
    }
    visited[i] = true;
  }

  while(q--) {

  }

  return 0;
}
