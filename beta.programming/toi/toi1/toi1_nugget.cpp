#include <bits/stdc++.h>
using namespace std;

bool nugget[200];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  nugget[0]=true;
  for(int i=0; i<=109; i++) {
    if(nugget[i]) {
      nugget[i+6] = true;
      nugget[i+9] = true;
      nugget[i+20] = true;
    }
  }

  int n;
  cin >> n;
  if(n<6) {
    cout << "no" << '\n';
  } else {
    for(int i=1; i<=n; i++) {
      if(nugget[i]) {
        cout << i << '\n';
      }
    }
  }
  return 0;
}
