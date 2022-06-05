#include <bits/stdc++.h>
using namespace std;

unsigned long long int n, a, b, c;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  
  cin >> n;
  while(n--) {
    cin >> a >> b >> c;
    unsigned long long int kuy = 1;
    a%=c;
    if(a!=0) {
      while(b>0) {
        if(b&1) {
          kuy=(kuy*a)%c;
        }
        b>>=1;
        a=(a*a)%c;
      }
      cout << kuy << '\n';
    }
  }

  return 0;
}