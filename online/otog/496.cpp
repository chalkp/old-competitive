#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int n;
  std::cin >> n;
  for(int i=0; i<n; i++) {
    for(int j=0; j<=i; j++) {
      if(j%2==0) {
        std::cout << '*';
      } else {
        std::cout << '-';
      }
    }
    std::cout << '\n';
  }
  return 0;
}
