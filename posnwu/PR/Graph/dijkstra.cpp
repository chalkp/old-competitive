#include <bits/stdc++.h>
using namespace std;

const int INF = 0x77777777;
const int N = 1e5+7;

struct edge {
  int w, node;
  bool operator < (const edge &i) const {
    return i.w < w;
  }
};

vector<edge> adj[N];
priority_queue<edge> prioq;
bool vst[N];
int n, m, dis[N];

void dijkstra() {
  prioq.push({0, 1});
  while(!prioq.empty()) {
    edge c = prioq.top();
    prioq.pop();
    if(!vst[c.node]) {
      vst[c.node] = true;
      for(edge i: adj[c.node]) {
        if(i.w + dis[c.node] < dis[i.node]) {
          dis[i.node] = i.w + dis[c.node];
          prioq.push({dis[i.node], i.node});
        }
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> m;
  for(int i=0; i<=n; i++) {
    dis[i] = INF;
  }
  for(int i=0; i<m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    adj[u].push_back({v, w});
  }
  dijkstra();
  cin >> m;
  cout << dis[m];

  return 0;
}