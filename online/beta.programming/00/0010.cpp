#include <bits/stdc++.h>
using namespace std;

char str[100];
bool a=1, b=0 ,c=0;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  cin >> str;
  for(char i : str) {
    switch(i) {
    case 'A':
      a ^= b;
      b ^= a;
      a ^= b;
      break;
    case 'B':
      c ^= b;
      b ^= c;
      c ^= b;
      break;
    case 'C':
      a ^= c;
      c ^= a;
      a ^= c;
      break;
    }
  }
  if(a) {
    cout << '1' << '\n';
  } else if(b) {
    cout << '2' << '\n';
  } else {
    cout << '3' << '\n';
  }
  return 0;
}
