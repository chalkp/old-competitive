#include <bits/stdc++.h>
using namespace std;

const int N = 1<<18;
int a[N], tree[N<<2];

void build(int l, int r, int id=1) {
  if(l==r) {
    tree[id] = a[l];
    return;
  }
  int mid = (l+r)>>1;
  build(l, mid, id<<1);
  build(mid+1, r, (id<<1)+1);
  tree[id] = min(tree[id<<1], tree[(id<<1)+1]);
}

void up(int l, int r, int id, int x, int val) {
  if(x<l || x>r) {
    return;
  }
  if(l==x && r==x) {
    tree[id] = val;
    return;
  }
  int mid = (l+r)>>1;
  up(l, mid, id<<1, x, val);
  up(mid+1, r, (id<<1)+1, x, val);
  tree[id] = min(tree[id<<1], tree[(id<<1)+1]);
}

int query(int l, int r, int id, int x, int y) {
  if(x>r || y<l) {
    return 0x7fffffff;
  }
  if(x<=l && y>=r) {
    return tree[id];
  }
  int mid = (l+r)>>1;
  return min(query(l, mid, id<<1, x, y), query(mid+1, r, (id<<1)+1, x, y));
}

int cm, h, b, n, q;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> q;
  for(int i=1; i<=n; i++) {
    cin >> a[i];
  }
  build(1, n);
  while(q--) {
    cin >> cm >> h >> b;
    if(cm-1) {
      cout << query(1, n, 1, h, b) << '\n';
    } else {
      up(1, n, 1, h, b);
    }
  }
  /*
  for(int i=1; i<n<<1; i++) {
    cout << i << " : " << tree[i] << '\n';
  }
  */

  return 0;
}