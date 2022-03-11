#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  bool nugget[200];
  for(int i=1; i<=200; i++) {
    nugget[i] = false;
  }
  nugget[0]=true;
  for(int i=0; i<=109; i++) {
    if(nugget[i]) {
      nugget[i+6] = true;
      nugget[i+9] = true;
      nugget[i+20] = true;
    }
  }
  int n;
  std::cin >> n;
  if(n<6) {
    std::cout << "no" << '\n';
  } else {
    for(int i=1; i<=n; i++) {
      if(nugget[i]) {
        std::cout << i << '\n';
      }
    }
  }
  return 0;
}
