#include <iostream>
#include <algorithm>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int n;
  std::cin >> n;
  int arr[n];
  for(int i=0; i<n; i++) {
    std::cin >> arr[i];
  }
  std::cout << *std::min_element(arr, arr+n) << '\n' << *std::max_element(arr, arr+n) << '\n';
  return 0;
}
