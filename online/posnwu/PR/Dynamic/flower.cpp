#include <bits/stdc++.h>
using namespace std;

const int N = 1e2+7;
int m, k;

struct flower {
  int a, b; // price, kirei
  bool t; // 1 -> tall : 0 -> short
};

flower arr[N];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  cin >> m >> k;
  for(int i=0; i<k; i++) {
    cin >> arr[i].a >> arr[i].b >> arr[i].t;
  }
  

  return 0;
}