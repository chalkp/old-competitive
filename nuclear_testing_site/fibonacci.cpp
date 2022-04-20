#include <bits/stdc++.h>
using namespace std;

const double phi1 = 1-sqrt(5), phi2 = 1+sqrt(5);

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int n;
  cin >> n;
  long long int b = (pow(phi2, n)-pow(phi1, n))/(pow(2, n)*sqrt(5));
  cout << b;
  return 0;
}