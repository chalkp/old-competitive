#include <bits/stdc++.h>
using namespace std;

int game[16], n;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  for(int i=0; i<16; i++) {
    char inp;
    cin >> inp;
    if(inp == 'R') {
      game[i] = 0;
    } else if(inp == 'G') {
      game[i] = 1;
    } else {
      game[i] = 2;
    } 
  }
  cin >> n;

  while(n--) {
    int temp[16];
    memset(temp, -1, sizeof(temp)/sizeof(bool));
    for(int i=0; i<16; i++) {
      if(game[i] == game[i+4]) {
        temp[i] = game[i];
        temp[i+4] = game[i+1];
      }
      if(game[i] == game[i+1] || i%4!=3) {
        temp[i] = game[i];
        temp[i+1] = game[i+1];
      }
    }
    set<int> RGB[3];
    
  }

  return 0;
}