#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int a;
  cin >> a;
  if(a<50) {
    cout << '0' << '\n';
  } else if(a<55) {
    cout << '1' << '\n';
  } else if(a<60) {
    cout << "1.5" << '\n';
  } else if(a<65) {
    cout << '2' << '\n';
  } else if(a<70) {
    cout << "2.5" << '\n';
  } else if(a<75) {
    cout << '3' << '\n';
  } else if(a<80) {
    cout << "3.5" << '\n';
  } else {
    cout << '4' << '\n';
  }
  return 0;
}
