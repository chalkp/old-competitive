#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int n, q;

void update(int idx, int num) {
  while(idx<=n) {
    a[idx] += num;
    idx+=(idx&-idx);
  }
}

long long int read(int idx) {
  long long int ans = 0;
  while(idx>0) {
    ans+=a[idx];
    idx-=(idx&-idx);
  }
  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> q;
  a.resize(n);

  for(int i=0; i<n; i++) {
    
  }

  return 0;
}