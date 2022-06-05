#include <bits/stdc++.h>
using namespace std;

const int N = 1<<18;
long long int arr[N], seg[N<<1], lazy[N<<1];

void pushlazy(int l, int r, int id) {
  if(!lazy[id]) {
    return;
  }
  seg[id] += lazy[id];
  if(l!=r) {
    lazy[id<<1] += lazy[id];
    lazy[(id<<1)+1] += lazy[id];
  }
  lazy[id] = 0;
}

void build(int l, int r, int id=1) {
  if(l==r) {
    seg[id]=arr[l];
    return;
  }
  int mid = (l+r)>>1;
  build(l, mid, id<<1);
  build(mid+1, r, (id<<1)+1);
  seg[id] = seg[id<<1] + seg[(id<<1)+1];
}

void update(int l, int r, int id, int x, int y, int val) {
  if(x>r or y<l) {
    return;
  }
  pushlazy(l, r, id);
  if(x<=l and y>=r) {
    lazy[id] += val;
    pushlazy(l, r, id);
    return;
  }
  int mid = (l+r)>>1;
  update(l, mid, id<<1, x, y, val);
  update(mid+1, r, (id<<1)+1, x, y, val);
  seg[id] = seg[id<<1] + seg[(id<<1)+1];
}

long long int query(int l, int r, int id, int x) {
  if(x>r or x<l) {
    return 0;
  }
  pushlazy(l, r, id);
  if(x<=l and x>=r) {
    return seg[id];
  }
  int mid = (l+r)>>1;
  return query(l, mid, id<<1, x) + query(mid+1, r, (id<<1)+1, x);
}

int n, q;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> q;
  for(int i=1; i<=n; i++) {
    cin >> arr[i];
  }
  build(1, n);
  while(q--) {
    int m;
    cin >> m;
    if(!(m-1)) {
      int a, b, c;
      cin >> a >> b >> c;
      update(1, n, 1, a, b, c);
    } else {
      int a;
      cin >> a;
      cout << query(1, n, 1, a) << '\n';
    }
  }

  return 0;
}