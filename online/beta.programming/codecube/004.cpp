#include <bits/stdc++.h>
using namespace std;
const unsigned int N=1e5+2;
unsigned int arr[N];
unsigned long long int sum=0;
unsigned int gcd(unsigned int a, unsigned int b) {
  if(a == 0) {
    return b;
  } else {
    return gcd(b%a, a);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  unsigned int n, g=0;
  cin >> n;
  for(unsigned int i=1; i<=n; i++) {
    cin >> arr[i];
    g = gcd(g, arr[i]);
    sum += arr[i];
  }
  cout << sum/g << '\n';
  return 0;
}
