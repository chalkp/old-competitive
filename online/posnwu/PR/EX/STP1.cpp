#include <bits/stdc++.h>
using namespace std;

const int INF = 0xffff7777, N = 1e5+7;

struct edge {
  int v, w;
};

struct node {
  int index, w;
  bool operator < (const node &a) const {
    return a.w < w;
  }
};

int n, m, s, k;
bool visit[N];
vector<edge> adj[N];
priority_queue<node> prioq;

int dijk() {
  while(!prioq.empty()) {
    node c = prioq.top();
    prioq.pop();
    if()
  }
  cout << "WTF?" << '\n';
  return -1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> m;
  cin >> s >> k;
  for(int i=0; i<m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    adj[u].push_back({v, w});
  }
  prioq.push({s, 0});

  return 0;
}