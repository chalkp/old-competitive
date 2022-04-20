#include <bits/stdc++.h>
using namespace std;

const int N = 1e2+7;

struct node {
  int index, cost, fuel, free;
  bool operator < (const node & p) const {
	   return p.cost < cost;
	}
};

struct edge {
  int v, w;
};

bool visited[N][N][2];
int n, price[N], s, d, f, m;

vector<edge> path[N];
priority_queue<node> prioq;

int dijkstra() {
  while(!prioq.empty()) {
    node c = prioq.top();
    prioq.pop();

    if(c.index == d && c.fuel == f) {
      return c.cost;
    }
    if(visited[c.index][c.fuel][c.free]) {
      continue;
    }
    visited[c.index][c.fuel][c.free] = true;

    if(c.fuel < f) {
      prioq.push({c.index, c.cost+price[c.index], c.fuel + 1, c.free});
    }
    if(c.free) {
      prioq.push({c.index, c.cost, f, 0});
    }
    for(edge i: path[c.index]) {
      if(c.fuel<i.w) {
        continue;
      } else {
        prioq.push({i.v, c.cost, c.fuel-i.w, c.free});
      }
    }
  }
  cout << "WTF?" << '\n';
  return 1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n;
  for(int i=1; i<=n; i++) {
    cin >> price[i];
  }
  cin >> s >> d >> f;
  cin >> m;
  while(m--) {
    int a, b, w;
    cin >> a >> b >> w;
    path[a].push_back({b, w});
    path[b].push_back({a, w});
  }

  prioq.push({s, 0, 0, 1});
  cout << dijkstra();

  return 0;
}
