#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;

struct road {
  int v, u, w; // prefecture A, prefecture B, village count
  bool operator < (const road &p) const {
    return p.w < w;
  }
};

vector<road> v;

int pa[N];

int root(int x) {
  if(pa[x] == x) {
    return x;
  } else {
    return pa[x] = root(pa[x]);
  }
}

void kruskal() {
  long long int village = 0;
  sort(v.begin(), v.end());
  for(road current: v) {
    if(root(current.v) != root(current.u)) {
      pa[root(current.v)] = root(current.u);
      village += current.w-1;
    } else {
      continue;
    }
  }
  cout << village;
  return;
}

int n, m;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  
  cin >> n >> m;
  for(int i=1; i<=n; i++) {
    pa[i] = i;
  }
  while(m--) {
    int p, q, w;
    cin >> p >> q >> w;
    v.push_back({p, q, w});
  }

  kruskal();

  return 0;
}