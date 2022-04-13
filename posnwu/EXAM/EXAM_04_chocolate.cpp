#include <bits/stdc++.h>
using namespace std;

int m, n, sum, a[1007];
bool can;

void choco(int index, int current) {
  if(current == sum) {
    can = true;
    return;
  } else if(can || index == n || current > sum) {
    return;
  } else {
    choco(index+1, current+a[index]);
    choco(index+1, current);
  }
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  cin >> m;
  while(m--) {
    can = false;
    sum = 0;
    cin >> n;
    for(int i=0; i<n; i++) {
      cin >> a[i];
      sum += a[i];
    }
    if(sum&1) {
      cout << "NO" << '\n';
    } else {
      sum >>= 1;
      choco(0, 0);
      can? cout << "YES" << '\n' : cout << "NO" << '\n';
    }
  }
  return 0;
}