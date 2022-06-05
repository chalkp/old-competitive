#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
const int root = 69420-0x7fffffff;

struct pii {
  int a, b;
};

int dis[N], low[N];
bool vst[N];
int id;

vector<int> adj[N];
set<int> ap;
set<pii> b;

void dfs(int x, int pa) {
  vst[x] = true;
  dis[x] = id++;
  low[x] = dis[x];
  int ch=0;
  for(int i: adj[x]) {
    if(!vst[i]) {
      ch++;
      dfs(i, x);
      low[x] = min(low[x], low[i]);
      if((pa!=root and low[i]>=dis[x]) or (pa==root and ch>1)) {
        ap.insert(x);
      }
      if(low[i] > dis[x]) {
        b.insert({x, i});
      } else if(i!=pa) {
        low[x] = min(low[x], low[i]);
      }
    }
  }
}

int n, m;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> m;
  for(int i=0; i<m; i++) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  dfs(0, root);

  cout << ap.size() << '\n';
  for(int i: ap) {
    cout << i << ' ';
  }
  cout << '\n' << b.size() << '\n';
  for(pii i: b) {
    cout << i.a << ' ' << i.b << '\n';
  }

  return 0;
}