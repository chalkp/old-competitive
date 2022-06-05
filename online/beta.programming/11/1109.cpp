#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int n;

struct node {
  unsigned long long int a, b;
  bool operator < (const node &cmp) {
    return cmp.b > b;
  }
};

node arr[N], tree[N];

void up(unsigned long long int id, unsigned long long int val) {
  while(id<=N) {
    tree[id].a += val;
    tree[id].b++;
    id+=(id&-id);
  }
}

node query(unsigned long long int id) {
  unsigned long long int sum=0, count=0;
  while(id>0) {
    sum += tree[id].a;
    count += tree[id].b;
    id-=(id&-id);
  }
  return {sum, count};
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> arr[i].a >> arr[i].b;
  }
  
  sort(arr, arr+n);
  unsigned long long int sum=0;

  for(int i=n-1; i>=0; i--) {
    node c = query(arr[i].a);
    sum+=c.a + c.b * arr[i].a;
    up(arr[i].a, arr[i].a);
  }
  cout << sum;
  
  return 0;
}