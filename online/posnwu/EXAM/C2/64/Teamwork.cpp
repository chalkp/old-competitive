#include <bits/stdc++.h>
using namespace std;

int player[107], work[100007], gay[100007], a, b;
double sum;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  cin >> a >> b;
  for(int i=0; i<b; i++) {
    cin >> work[i];
  }
  sort(work, work+b, [](int x, int y) {return x<y;});
  for(int i=0; i<b; i++) {
    player[i%a] += work[i];
    gay[i]=player[i%a];
  }
  for(int i:gay) {
    sum += i;
  }
  cout << fixed << setprecision(3) << sum/b << '\n';
  return 0;
}