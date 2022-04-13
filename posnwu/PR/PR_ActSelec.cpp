#include <bits/stdc++.h>
using namespace std;

struct dick {
  int length, size;
  bool operator < (const dick &pussy) const {
    return size < pussy.size;
  }
};

const int N = 1e2+7;
int tit, nut;
dick cock[N];

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  cin >> tit;
  while(tit--) {
    cin >> nut;
    int cunt=0, fuck=0;
    for(int i=0; i<nut; i++) {
      cin >> cock[i].length;
    }
    for(int i=0; i<nut; i++) {
      cin >> cock[i].size;
    }
    sort(cock, cock+nut);
    for(int i=0; i<nut; i++) {
      if(cock[i].length >= fuck) {
        cunt++;
        fuck = cock[i].size;
      }
    }
    cout << cunt << '\n';
  }
  return 0;
}