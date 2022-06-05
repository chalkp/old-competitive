#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int n, m, p, a, b;
bool vst[N], vstt[N];
vector<int> adj[N], dick[N];
int dis[N], disb[N], dp[N], jizz[N];

void bfs(int x) {
  queue<int> q;
  q.push(x);
  dis[x] = 0;
  while(!q.empty()) {
    int c = q.front();
    q.pop();
    for(int i: adj[c]) {
      if(!vst[i]) {
        dis[i] = dis[c] + 1;
        vst[i] = true;
        q.push(i);
      }
    }
  }
}

void bbfs(int x) {
  queue<int> q;
  q.push(x);
  disb[x] = 0;
  while(!q.empty()) {
    int c = q.front();
    q.pop();
    for(int i: adj[c]) {
      if(!vstt[i]) {
        disb[i] = disb[c] + 1;
        vstt[i] = true;
        q.push(i);
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  cin >> n >> m >> p >> a >> b;
  while(m--){
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  bfs(a);
  bbfs(b);

  for(int i=0; i<=n; i++) {
    
  }

  return 0;
}