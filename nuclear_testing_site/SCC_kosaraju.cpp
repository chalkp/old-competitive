#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;

struct edge {
  int v, w;
};

vector<edge> adj[N], rev[N];
stack<int> st;
bool vst[N];

void dfs(int x) {
  vst[x] = true;
  for(edge i: adj[x]) {
    dfs(i.v);
  }
  st.push(x);
}

void scc(int x) {
  if(vst[x]) {
    return;
  }
  vst[x] = true;
  cout << x << ' ';
  for(edge i: rev[x]) {
    scc(i.v);
  }
}

int n, m;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> m;
  for(int i=0; i<m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    adj[u].push_back({v, w});
    rev[v].push_back({u, w});
  }

  return 0;
}