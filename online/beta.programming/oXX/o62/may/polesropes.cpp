#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3, unroll-loops")

const int N = 1e5+7;
int n, m;
int lazy[(N<<1)+69420], seg[(N<<1)+69420];

void build(int l, int r, int id=1) {
  if(l==r) {
    seg[id] = 10;
    return; 
  }
  int mid = (l+r)>>1;
  build(l, mid, id<<1);
  build(mid+1, r, (id<<1)+1);
  seg[id]=seg[id<<1]+seg[(id<<1)+1];
}

void pushlazy(int l, int r, int id) {
  if(!lazy[id]) {
    return;
  }
  seg[id] += lazy[id];
  if(l!=r) {
    lazy[id<<1]+=lazy[id];
    lazy[(id<<1)+1]+=lazy[id];
  }
  lazy[id] = 0;
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
  update(mid, r, (id<<1)+1, x, y, val);
  seg[id] = seg[id<<1] + seg[(id<<1)+1];
}

int query(int l, int r, int id, int x, int y) {
  if(x>r or y<l) {
    return 0;
  }
  pushlazy(l, r, id);
  if(x<=l and y>=r) {
    return seg[id];
  }
  int mid = (l+r)>>1;
  return query(l, mid, id<<1, x, y) + query(mid+1, r, (id<<1)+1, x, y);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> m;
  build(0, n-1);
  int T;
  while(m--) {
    cin >> T;
    if(!(T-1)) { // I've fucked up for 24 times
      int i, j;
      cin >> i >> j;
      int l=query(0, n-1, 1, 0, i);
      int r=query(0, n-1, 1, i+1, n-1);

      if(l>=(j<<1)) {
        
        if(r>=(j<<1)) {
          int la=1, ra=i, position, inter;
          while(la<=ra) {
            int mid=(l+r)<<1, tmp=query(0, n-1, 1, mid, i);
            if(tmp>=(j<<1)) {
              inter = tmp;
              position = mid;
              la=mid+1;
            }
            update(0, 0, n-1, position+1, i, 0);
            update(0, 0, n-1, position, position, inter-(inter<<1));
          }
        }

      }
    } else {
      int i;
      cin >> i;
      cout << query(0, n-1, 1, i, i);
    }
  }

  return 0;
}