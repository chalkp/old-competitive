#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  vector<char> arr;
  cin >> n;
  while(n!=0) {
    if(n&1) {
      n--;
      n = n>>1;
      arr.push_back('1');
    } else {
      arr.push_back('0');
      n = n>>1;
    }
  }

  return 0;
}
