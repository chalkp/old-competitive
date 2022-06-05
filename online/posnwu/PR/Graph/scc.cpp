#include <bits/stdc++.h>
using namespace std;

struct edge {
  int v, w;
  bool operator < (const edge &e) const {
    return e.w < w;
  }
};

struct node {
  int index, len;
};

const int N = 1e5+7;
int pa[N];

int root(int x) {
  if(pa[x] == x) {
    return x;
  }
  return pa[x] = root(pa[x]);
}

void __dfs(node x) {
  queue<node> q;
  q.push(x);
  while(!q.empty()) {
    node c = q.front();
    q.pop();

  }
  return;
}

vector<edge> adj[N];
priority_queue<node> prioq;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  return 0;
}