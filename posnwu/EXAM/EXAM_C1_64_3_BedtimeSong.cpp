#include <bits/stdc++.h>
using namespace std;

int h , m;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

  cin >> h >> m;

  if(h >= 21) {
    cout << 0 << ' ' << 0;
    return 0;
  } else {
    int time = ((21-h)*60)-m-15;
    if(time<=0) {
      cout << 0 << ' ' << 0;
      return 0;
    }
    if(time&1) {
      cout << time << ' ' << time/2+1;
    } else {
      cout << time << ' ' << time/2;
    }
  }

  return 0;
}