#include <bits/stdc++.h>
using namespace std;

int a, b;
long long int sum = 0;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

  cin >> a;
  for(int i=0; i<a; i++) {
    cin >> b;
    sum+=b;
  }
  cout << sum/a;

  return 0;
}
