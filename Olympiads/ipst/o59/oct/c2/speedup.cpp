#include <bits/stdc++.h>
using namespace std;
const int N = 8e4+7, M = 2e5+7;

struct edge {
  long long int u, w;
};

struct node {
  long long int t, u, pot, last;
  bool operator < (const node &n) {
    return (t == n.t and pot > n.pot) or t > n.t;
  }
};

int n, m, l, q;
vector<edge> adj[N];
long long int dis[N][17] = {0x3f3f3f3f};
bool potion[N];

void dijk() {
  priority_queue<node> prioq;
  prioq.push({0, 1, 0, 0});
  while(!prioq.empty()) {
    node c = prioq.top();
    prioq.pop();
    if(c.u == n) {
      cout << c.t;
      return;
    }
    for(edge i: adj[c.u]) {
      if(c.t+(i.w>>c.pot) < dis[c.u][c.pot]) {
        dis[c.u][c.pot] = c.t+(i.w>>c.pot);
        prioq.push({c.t+(i.w>>c.pot), i.u, c.pot, c.last});
      }
    }
    if(potion[c.u] and c.u!=c.last and c.pot<q) {
      prioq.push({c.t, c.u, c.pot+1, c.u});
    }
  }
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> m >> l >> q;
  dis[1][0] = 0;
  while(m--) {
    int a, b, w;
    cin >> a >> b >> w;
    adj[a].push_back({b, w});
  }

  while(l--) {
    int a;
    cin >> a;
    potion[a] = true;
  }

  return 0;
}