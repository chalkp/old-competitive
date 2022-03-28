#include <bits/stdc++.h>
using namespace std;

char n[50];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  cin >> n;
  int sum = 0;
  for(char i: n) {
    if(i=='\0') {
      break;
    }
    sum += i - '0';
  }
  cout << sum;
  return 0;
}
