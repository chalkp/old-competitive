#include <bits/stdc++.h>
using namespace std;

const int N = 1e4+7;

struct edge {
  int u;
  long long int w;
};

struct node {
  int index, timing;
  bool operator > (const node &p) const {
    return p.timing > timing;
  }
};

int n, p, u, e, l, h;
vector<edge> adj[N];
priority_queue<node> prioq;
bool visited[N];

void dijk(int h) {
  while(!prioq.empty()) {
    node current = prioq.top();
    prioq.pop();
    if(visited[current.index]) {
      continue;
    }
    for(edge i: adj[current.index]) {
      if(i.w + current.timing < )
    }
  }
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> p >> u >> e;
  for(int i=0; i<e; i++) {
    int q, r;
    long long int t;
    cin >> q >> r >> t;
    adj[q].push_back({r, t});
  }
  cin >> l;
  prioq.push({p, 0});
  return 0;
}
