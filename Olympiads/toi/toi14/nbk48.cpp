#include <bits/stdc++.h>
using namespace std;

long long int sum[200000], q;
int N, Q;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  cin >> N >> Q;
  sum[0] = 0;
  for(int i=1; i<=N; i++) {
    cin >> sum[i];
    sum[i] += sum[i-1];
  }
  for(int i=N-1; i>=1; i--) {
    sum[i] = min(sum[i+1], sum[i]);
  }
  for(int i=Q; i>0; i--) {
    cin >> q;
    cout << upper_bound(sum+1, sum+N+1, q)-sum-1 << '\n';
  }
  return 0;
}
