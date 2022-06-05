#include <bits/stdc++.h>
using namespace std;

const int N = 80007;

struct edge {
  int v, w;
};

vector<edge> adj[N];
bool vst[N];
long long int dist[N];
int id=0;

void dfs(int c) {
  vst[c] = true;
  for(edge i: adj[c]) {
    if(!vst[i.v]) {
      dist[++id] = i.w;
      dfs(i.v);
    }
  }
}

int n, u, v, l, start; // start position

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> u >> v >> l;
    adj[u].push_back({v, l});
    adj[v].push_back({u, l});
  }

  for(int i=0; i<n; i++) {
    if(adj[i].size()==1) {
      start=i;
      break;
    }
  }

  dfs(start);
  long long int s=0, r=1<<30;
  while(s<r) {
    long long int cnt=0, sum=0, m=(s+r+1)>>1;

    for(int i=0; i<=n; i++) {
      sum += dist[i];
      if(sum>=m) {
        cnt++;
        sum=0;
      }
    }
    if(cnt>2) {
      s = m;
    } else {
      r = m-1;
    }
  }

  cout << s;

  return 0;
}