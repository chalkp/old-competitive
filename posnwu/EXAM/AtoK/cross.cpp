#include <bits/stdc++.h>
using namespace std;

struct vec {
  int a, b, c;
};

vec cross(vec x, vec y) {
  vec z;
  z.a = (x.b*y.c) - (x.c*y.b);
  z.b = (x.c*y.a) - (x.a*y.c);
  z.c = (x.a*y.b) - (x.b*y.a);
  return z;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  
  vec x, y, z;
  cin >> x.a >> x.b >> x.c;
  cin >> y.a >> y.b >> y.c;
  z = cross(x, y);
  cout << z.a << ' ' << z.b << ' ' << z.c;

  return 0;
}