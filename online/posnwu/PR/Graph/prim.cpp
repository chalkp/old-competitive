#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;

struct edge {
  int u, w;
  bool operator < (const edge &i) const {
    return i.w < w;
  }
};

int pa[N];
bool vst[N];

int root(int x) {
  if(pa[x] == x) {
    return x;
  }
  return pa[x] = root(pa[x]);
}

vector<edge> mst[N];
priority_queue<int> prioq;

void prim() {
  int len;
  prioq.push(0);
  while(!prioq.empty()) {
    int c = prioq.top();
    prioq.pop();
    for(edge i: mst[c]) {
      
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  

  return 0;
}