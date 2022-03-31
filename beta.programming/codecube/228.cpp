#include <bits/stdc++.h>
#define pb push_back
using namespace std;
using lli = long long int;

const int N=1e5+7;
const lli inf=2e18;
int n, m, k, t, ans;
bool pot[N];

struct node {
  lli d;
  int index, p;
  bool operator < (const node &u) const {
    return (d==u.d && p>u.p) || d > u.d;
  }
};

struct edge {
  int b;
  lli w;
};


lli dist[N][8];
vector<edge> adj[N];
priority_queue<node> prioq;

void dijkstra() {
  prioq.push({0,1,0});
  while(!prioq.empty()) {
    node c = prioq.top();
    prioq.pop();
    if(c.index == n) {
      cout << c.d;
      return;
    }
    for(edge i: adj[c.index]) {
      if(c.d+i.w < dist[i.b][c.p]) {
        dist[i.b][c.p] = c.d+i.w;
        prioq.push({dist[i.b][c.p], i.b, c.p});
      }
    }
    if(pot[c.index] && !c.p) {
      dist[c.index+1][1] = dist[c.index][0];
      prioq.push({dist[c.index][1], c.index+1, 1});
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  cin >> n >> m >> k >> t;
  for(int i=0; i<=n; i++) {
    for(int j=0; j<=15; j++) {
      dist[i][j] = inf;
    }
  }
  dist[1][0] = 0;
  while(m--) {
    int a, b;
    lli w;
    cin >> a >> b >> w;
    adj[a].pb({b, w});
  }
  dijkstra();
  return 0;
}
