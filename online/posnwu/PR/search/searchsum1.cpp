#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
long long int n, k, book[N], money;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> k;

  for(long long int i=0; i<n; i++) {
    cin >> book[i];
  }
  for(long long int i=0; i<n; i++) {
    book[i+1] += book[i];
  }
  for(long long int i=0; i<k; i++) {
    cin >> money;
    cout << upper_bound(book, book+n, money) - book << '\n';
  }

  return 0;
}