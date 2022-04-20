#include <bits/stdc++.h>
using namespace std;

const double phi[2] = {1+sqrt(5), 1-sqrt(5)};
unsigned long long int a, b;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

  cin >> a;
  b = (pow(phi[0], a)-pow(phi[1], a))/(pow(2,a)*sqrt(5));
  cout << b;
  
  return 0;
}
