#include <bits/stdc++.h>
using namespace std;

double Area(double X[], double Y[]) {
  double area = 0.0;
  int j=2;
  for (int i = 0; i < 3; i++) {
    area += (X[j]+X[i])*(Y[j]-Y[i]);
    j = i;
  }
  return abs(area/2.0);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  double X[3], Y[3];
  for(int i=0; i<3; i++) {
    cin >> X[i] >> Y[i];
  }
  cout << Area(X, Y) << '\n';
}
