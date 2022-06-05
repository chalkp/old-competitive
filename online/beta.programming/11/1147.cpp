#include <bits/stdc++.h>
using namespace std;

const int lowest = 69420-0x7fffffff;
int n, q;

class node {
public:
  int value, low, up;
  class node* left;
  class node* right;
  
  node();
  node(int _low=0, int _up=0, int _value=0) {
    value = _value;
    low = _low;
    up = _up;
    left = nullptr;
    right = nullptr;
  }

  void update(int _id, int _value) {
    if(left==nullptr && low<up) {
      int mid = (low+up)>>1;
      left = new node(low, mid);
      right = new node(mid+1, up);
    }

    if(low == up) {
      value = _value;
      return;
    }
    if(_id <= left->up) {
      left->update(_id, _value);
    } else {
      right->update(_id, _value);
    }
    value = max(left->value, right->value);
  }

  int query(int _a, int _b) {
    if(_a>_b || up<_a || low > _b) {
      return lowest;
    }
    if(_a<=low && up<=_b) {
      return value;
    }
    if(left==nullptr && low<up) {
      int mid = (low+up)>>1;
      left = new node(low, mid);
      right = new node(mid+1, up);
    }
    return max(left->query(_a, _b), right->query(_a, _b));
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  char cmd;
  int a, b;
  cin >> n >> q;
  node* tree = new node(1, n);
  while(q--) {
    cin >> cmd >> a >> b;
    switch(cmd) {
    case 'U':
      tree->update(a, b);
      break;
    case 'P':
      int a, b;
      cout << tree->query(a, b) << '\n';
    }
  }

  return 0;
}