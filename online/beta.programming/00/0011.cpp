#include <bits/stdc++.h>
using namespace std;

bool asshole[47];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n=0, m, i=10;
  while(i--) {
    cin >> m;
    if(!asshole[m%42]) {
      n++;
      asshole[m%42]=true;
    }
  }
  cout << n;
  return 0;
}

/*
_____                       ____        _
/ ____|                     |  _ \      | |
| (___  _   _ ___ ___ _   _  | |_) | __ _| | ____ _
\___ \| | | / __/ __| | | | |  _ < / _` | |/ / _` |
____) | |_| \__ \__ \ |_| | | |_) | (_| |   < (_| |
|_____/ \__,_|___/___/\__, | |____/ \__,_|_|\_\__,_|
                     __/ |
                    |___/
*/
