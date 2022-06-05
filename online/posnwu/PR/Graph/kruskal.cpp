#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+7;

struct edge {
  int weight, a, b;
  bool operator < (const edge &i) const {
    return i.weight < weight;
  }
};

vector<edge> mst;
priority_queue<edge> prioq;
int pa[N];
int n, m, p, q, w;

int root(int x) {
  if(pa[x] == x) {
    return x;
  } else {
    return pa[x] = root(pa[x]);
  }
}

int kruskal() {
  int length = 0;
  while(!prioq.empty()) {
    edge current = prioq.top();
    prioq.pop();
    if(root(current.a) != root(current.b)) {
      pa[root(current.a)] = root(current.b);
      length += current.weight;
      mst.push_back(current);
    } else {
      continue;
    }
  }
  return length;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  cin >> n >> m;
  for(int i=0; i<=n; i++) {
    pa[i] = i;
  }
  while(m--) {
    cin >> p >> q >> w;
    prioq.push({w, p, q});
  }
  cout << kruskal();
  return 0;
}