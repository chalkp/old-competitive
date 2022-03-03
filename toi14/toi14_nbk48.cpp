#include <bits/stdc++.h>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int N, Q;
  std::cin >> N >> Q;
  long long int sum[200000], q;
  sum[0] = 0;
  for(int i=1; i<=N; i++) {
    std::cin >> sum[i];
    sum[i] += sum[i-1];
  }
  for(int i=N-1; i>=1; i--) {
    sum[i] = std::min(sum[i+1], sum[i]);
  }
  for(int i=Q; i>0; i--) {
    std::cin >> q;
    std::cout << std::upper_bound(sum+1, sum+N+1, q)-sum-1 << '\n';
  }
  return 0;
}
