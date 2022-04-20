#include <bits/stdc++.h>
using namespace std;

unsigned long long int n, a, b, c;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  
  cin >> n;
  while(n--) {
    cin >> a >> b >> c;
    unsigned long long int kuy = 1;
    c = pow(10, c);
    a%=c;
    if(a!=0) {
      while(b>0) {
        if(b&1) {
          kuy=(kuy*a)%c;
        }
        b>>=1;
        a=(a*a)%c;
      }
      if(c==10) {
        cout << kuy << '\n';
      } else if(c==100) {
        if(kuy<10) {
          cout << '0' << kuy << '\n';
        } else {
          cout << kuy << '\n';
        }
      } else if(c==1000) {
        if(kuy<10) {
          cout << "00" << kuy << '\n';
        } else if(kuy<100) {
          cout << '0' << kuy << '\n';
        } else {
          cout << kuy << '\n';
        }
      } else if(c==10000) {
        if(kuy<10) {
          cout << "000" << kuy << '\n';
        } else if(kuy<100) {
          cout << "00" << kuy << '\n';
        } else if(kuy<1000)  {
          cout << '0' << kuy << '\n';
        } else {
          cout << kuy << '\n';
        }
      }
    } else {
      if(c==10) {
        cout << '0' << '\n';
      } else if(c==100) {
        cout << "00" << '\n';
      } else if(c==1000) {
        cout << "000" << '\n';
      } else if(c==10000) {
        cout << "0000" << '\n';
      }
    }
  }

  return 0;
}