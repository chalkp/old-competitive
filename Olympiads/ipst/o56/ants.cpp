#include <bits/stdc++.h>
using namespace std;
using pii = pair<int,int>

const int inf = 1e9;
const int N = 1e5+7;
int d[N], n, m;
bool visit[N];

struct edge {
  int w, node;
  bool operator < (const edge &i) const {
    return i.w < w;
  }
};

vector<edge> adj[N];
priority_queue<edge> prioq;


void dijkstra() {
  while(!prioq.empty()) {
    edge c = prioq.top();
    prioq.pop();
    if(visit[c.node]) {
      continue;
    }
    visit[c.node] = true;
    for(edge u: adj[c.node]) {
      if(u.w + d[c.node] < d[u.node]) {
        d[u.node] = u.w + d[c.node];
        prioq.push({d[u.node], u.node});
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  prioq.push({0,1});

  cin >> n >> m;
  for(int i=0; i<=n; i++) {
    d[i]=inf;
  }
  int p, q, r;
  while(m--) {
    cin >> p >> q >> r;
    adj[p].push_back({r, q});
  }

  return 0;
}
