#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int n;
  std::cin >> n;
  for(int i=1; i<=n; i++) {
    std::cout << i << ": *";
    int m = i;
    while(m%2==0) {
      m/=2;
      std::cout << '*';
    }
    std::cout << '\n';
  }
  return 0;
}
