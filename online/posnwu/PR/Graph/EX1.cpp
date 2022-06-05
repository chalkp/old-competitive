#include <bits/stdc++.h>
using namespace std;

struct node {
  int index;
};

struct edge {
  node v;
  int w;
};

string names[] = {"Top", "May", "Boy", "Kim", "Gun"};
vector<edge> adj[4];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  adj[0].push_back({1, 12});
  adj[0].push_back({4, 4});
  adj[1].push_back({4, 15});
  adj[1].push_back({3, 19});
  adj[2].push_back({1, 2});
  adj[2].push_back({3, 18});
  adj[3].push_back({4, 14});

  for(int i=0; i<5; i++) {
    cout << names[i];
    if(adj[i].empty()) {
      cout << '\t' << "-> -";
    } else {
      for(edge j: adj[i]) {
        cout << '\t' << "-> " << names[j.v.index]  << ' ' << j.w << " coins" << '\n';
      }
    }
    
    cout << '\n';
  }

  return 0;
}