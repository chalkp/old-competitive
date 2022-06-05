#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
short int cunt=0;
string in;
bool asshole = false;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
  cin >> in;

  for(char i: in) {
    if((i>='A'&&i<='Z')||(i>='a'&&i<='z')) {
      cunt++;
    } else {
      cunt=0;
    }
    if(cunt>9) {
      asshole = true;
      break;
    }
  }

  asshole? cout << "Too long didn't read" << '\n' : cout << "I’ll get right on it" << '\n';
  return 0;
}
