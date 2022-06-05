#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 1e5 + 5;
vector <int> graph[MAX_N];
int dist[2][MAX_N];
vector <int> nodes[MAX_N];
int ans[MAX_N];

void bfs(int t, int s) {
  queue <int> q;
  q.emplace(s);
  dist[t][s] = 0;
  while(!q.empty()) {
    int u = q.front();
    q.pop();
    for(auto v : graph[u]) {
      if(dist[t][v] == -1) {
        dist[t][v] = dist[t][u] + 1;
        q.push(v);
      }
    }
  }
}
int main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  int N, M, P, A, B;
  cin >> N >> M >> P >> A >> B;
  while(M--) {
    int u, v;
    cin >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }
  memset(dist, -1, sizeof(dist));
  bfs(0, A);
  bfs(1, B);
  multiset <int> max_dist;
  max_dist.insert(0);
  for(int i = 1; i <= N; i++) {
    nodes[dist[1][i]].push_back(i);
    max_dist.emplace(dist[0][i]);
  }
  for(int i = 0; i <= N; i++) {
    for(auto v : nodes[i]) {
      max_dist.erase(max_dist.lower_bound(dist[0][v]));
    }
    if(!max_dist.empty()) {
      ans[i] = *max_dist.rbegin();
    }
  }
  while(P--) {
    int X;
    cin >> X;
    cout << ans[X] << '\n';
  }
  return 0;
}
