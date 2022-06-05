#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;

vector<pii> v, ans;
map<vector<pii>, int> m;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t, q;
  cin >> t >> q;

  for(int i=0; i<t; i++) {
    int n;
    cin >> n;
    for(int j=0; j<n-1; j++){
      int a, b;
      cin >> a >> b;
      v.push_back({min(a,b),max(a,b)});
    }
    sort(v.begin(), v.end());
    m[v]++;
    v.clear();
  }

  for(int i=0; i<q; i++) {
      int n;
      cin >> n;
      for(int j=0; j<n-1; j++) {
        int a, b;
        cin >> a >> b;
        ans.push_back({min(a,b), max(a,b)});
      }
      sort(ans.begin(), ans.end());
      cout << m[ans] << '\n';
      ans.clear();
  }
  return 0;
}
