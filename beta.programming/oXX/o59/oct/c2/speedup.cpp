#include <bits/stdc++.h>
#define pb push_back
using namespace std;
using lli = long long int;

const int L=17, N=8e4+7, M=2e5+7;
const lli inf=2e18;
int n, m, l, q, ans;
bool pot[N];

struct node {
  lli d;
  int index, p, last; //distance, index, potion, last pot node
  bool operator < (const node &u) const {
    return (d==u.d && p>u.p) || d > u.d;
  }
};

struct edge {
  int b;
  lli w; // node, weight
};


lli dist[N][15]; //dist[index][speed]
vector<edge> adj[N]; // <node2, distance> [node1]
priority_queue<node> prioq;

void dijkstra() {
  prioq.push({0,1,0,0});
  while(!prioq.empty()) {
    node c = prioq.top(); //c.d = distane / c.index = index / c.p = potion count
    prioq.pop();
    if(c.index == n) {
      cout << c.d;
      return;
    }
    for(edge i: adj[c.index]) {
      if(c.d+(i.w >> c.p) < dist[i.b][c.p]) {
        dist[i.b][c.p] = c.d+(i.w >> c.p);
        prioq.push({dist[i.b][c.p], i.b, c.p, c.last});
      }
    }
    if(pot[c.index] && c.last != c.index && c.p<q) {
      prioq.push({dist[c.index][c.p], c.index, c.p+1, c.index});
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  cin >> n >> m >> l >> q;
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
  while(l--) {
    int a;
    cin >> a;
    pot[a] = true;
  }
  dijkstra();
  return 0;
}
