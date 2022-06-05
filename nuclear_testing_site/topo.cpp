#include <bits/stdc++.h>
using namespace std;

stack<int> s;
vector<int> adj[100];

void dfs() {

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  adj[1].push_back(2);
  adj[1].push_back(5);
  adj[2].push_back(3);
  adj[2].push_back(4);
  adj[3].push_back(7);
  adj[7].push_back(6);
  adj[7].push_back(8);
  return 0;
}