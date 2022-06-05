#include <bits/stdc++.h>
using namespace std;

long long int p;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> p;
  if(x == 2 || x == 3){
    cout << "yes";
  }
  else if(fmod(x,2) == 0 || x == 1){
    cout << "no";
  }

  else if(x > 10000000000000000){
    cout << "yes";
  }
  else {
    int count = 0;
    for (int i = 3; i < floor(sqrt(x)); i += 2) {
      if(fmod(x,i) == 0){
        cout << "no";
        count ++;
        break;
      }
    }
    if (count == 0){
      cout << "yes";
    }
  }

  return 0;
}
