#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
#define vec vector
#define f first
#define s second

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, M, count, press, index;
  set<pii> bottle;
  cin >> N >> M;
  for(int i=0; i<N; i++) {
    cin >> count;
    bottle.insert({i, count});
  }
  for(int i=0; i<M; i++) {
    count = 0;
    cin >> press;
    auto it = bottle.lower_bound(pii(press, -1));
    while(it != bottle.end()) {
      count ++;
      index = it->f;
      it = bottle.erase(it);
      if(it->f == index+1) {
        count++;
        bottle.erase(it);
      }
      it--;
      if(it->f == index-1) {
        count++;
        bottle.erase(it);
      }
    }
    cout << count << '\n';
  }

  return 0;
}
