#include <bits/stdc++.h>
using namespace std;

int n;
double d;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

  cin >> n;
  while(n--) {
    cin >> d;
    if((double)((int)d) == d) {
      cout << "OK" << '\n';
    } else {
      cout << "NOT INTEGER" << '\n';
    }
  }

  return 0;
}