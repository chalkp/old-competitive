#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
#define vec vector
#define f first
#define s second
//แหก
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, M, count, press, index;
  set<pii> bottle;
  cin >> N >> M;
  for(int i=0; i<N; i++) {
    cin >> count;
    bottle.insert(make_pair(count, i));
  }
  for(int i=0; i<M; i++) {
    count = 0;
    cin >> press;
    auto it = bottle.lower_bound({press, -1});

    cout << count << '\n';
  }

  return 0;
}
