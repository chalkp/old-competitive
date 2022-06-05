#include <bits/stdc++.h>
using namespace std;

const int N = 1e4+7;
long long int rope[N];
int n, k;

void dp() {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<i; j++) {
      rope[i] = max(rope[i], rope[j]+rope[i-j]);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  
  cin >> n;
  for(int i=1; i<=n; i++) {
    cin >> rope[i];
  }
  cin >> k;
  dp();
  cout << rope[k];

  return 0;
}