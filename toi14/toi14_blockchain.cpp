#include <bits/stdc++.h>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  std::vector<std::pair<int, int>> v, ans;
  std::map<std::vector<std::pair<int, int>>, int> m;
  int t, q;
  std::cin >> t >> q;

  for(int i=0; i<t; i++) {
    int n;
    std::cin >> n;
    for(int j=0; j<n-1; j++){
      int a, b;
      std::cin >> a >> b;
      v.push_back({std::min(a,b),std::max(a,b)});
    }
    std::sort(v.begin(), v.end());
    m[v]++;
    v.clear();
  }

  for(int i=0; i<q; i++) {
      int n;
      std::cin >> n;
      for(int j=0; j<n-1; j++) {
        int a, b;
        std::cin >> a >> b;
        ans.push_back({std::min(a,b), std::max(a,b)});
      }
      std::sort(ans.begin(), ans.end());
      std::cout << m[ans] << '\n';
      ans.clear();
  }
  return 0;
}
