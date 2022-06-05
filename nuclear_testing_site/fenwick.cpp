#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
long long int tree[N], n, q, arr[N];

void up(int id, int v) {
  while(id<=n) {
    tree[id] += v;
    id += (id & -id);
  }
}

long long int query(int id) {
  long long int sum = 0;
  while(id > 0) {
    sum += tree[id];
    id -= (id & -id);
  }
  return sum;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  cin >> n >> q;
  for(int i=0; i<n; i++) {
    cin >> arr[i+1];
    up(i+1, arr[i+1]);
  }
  int op, a, b;
  for(int i=0; i<q; i++) {
    cin >> op >> a >> b;
    if(op==2) {
      cout << query(b) - query(a-1) << '\n';
    } else {
      up(a, b-arr[a]);
      arr[a] = b;
    }
  }
  return 0;
}