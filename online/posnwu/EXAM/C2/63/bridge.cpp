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
int length, cost;

int root(int x) {
  if(pa[x] == x) {
    return x;
  } else {
    return pa[x] = root(pa[x]);
  }
}

void kruskal() {
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
  kruskal();
  return 0;
}