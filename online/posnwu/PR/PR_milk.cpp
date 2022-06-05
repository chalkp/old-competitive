#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
int pa[N];

int root(int x) {
    if(pa[x]==x) {
      return x;
    } else {
      return pa[x] = root(pa[x]);
    }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, m, q;
  char cq;
  cin >> n >> q;
  for(int i=0; i<=n; i++) {
    pa[i] = i;
  }
  while(q--) {
    cin >> cq;
    if(cq == 'c') {
      cin >> n >> m;
      pa[root(n)] = root(m);
    } else {
      cin >> n >> m;
      if(root(n) == root(m)) {
        cout << "yes\n";
      } else {
        cout << "no\n";
      }
    }
  }

  return 0;
}
