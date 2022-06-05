#include <bits/stdc++.h>
using namespace std;

const int N = 2e3+7;
const long long int INF = 0x7777ffffffffffffLL;

struct edge {
  int u;
  long long int w;
  bool operator < (const edge &x) const {
    return x.w < w;
  }
};

struct node {
  int index, cave;
  long long int w;
  bool operator < (const node &x) const {
    return x.w < w;
  }
};

int n, p, u, e;
long long int dis[N][N] = {INF};
priority_queue<node> prioq;
vector<edge> adj[N], dijk;
bool vst[10007][N];

void Xx_dickstra_lnwzaa69420_xX() {
  prioq.push({p, 0, 0});
  while(!prioq.empty()) {
    node c = prioq.top();
    prioq.pop();
    if(c.index == e) {
      continue;    
    }
    if(vst[c.cave][c.index]) {
      continue;
    }
    vst[c.cave][c.index] = true;
    for(edge i: adj[c.index]) {
      if(dis[c.index][i.u] > i.w+c.w) {
        dis[c.index][i.u] = i.w+c.w;
        prioq.push({i.u, c.index, i.w+c.w});
      }
    }
  }
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
  Xx_dickstra_lnwzaa69420_xX();
  int l;
  cin >> l;
  while(l--) {
    long long int mini = 0x7fffffffffffffffLL;
    int x;
    cin >> x;
    for(edge i: dijk) {
      mini = min(mini, (long long int)i.w+(i.u-1)*x);
    }
    cout << mini << ' ';
  }

  return 0;
}