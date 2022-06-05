#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int n;
  std::cin >> n;
  for(int i=1; i<=n; i++) {
    for(int j=n-1; j>=0; j--) {
      if(j<i) {
        std::cout << '*';
      } else {
        std::cout << '-';
      }
    }
    std::cout << '\n';
  }
  return 0;
}
