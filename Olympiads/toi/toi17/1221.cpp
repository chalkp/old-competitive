#include <bits/stdc++.h>
using namespace std;

struct dual {
  int a, b;
};

const int N = 507;
int n, m, q;
int price[N];
vector<dual> promo;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> m >> q;
  for(int i=0; i<n; i++) {
    cin >> price[i];
  }
  for(int i=0; i<m; i++) {
    cin >> promo[i].a >> promo[i].b;
  }
  


  return 0;
}