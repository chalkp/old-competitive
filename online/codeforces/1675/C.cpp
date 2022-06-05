#include <bits/stdc++.h>
using namespace std;

int t;
string s;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> t;
  while(t--) {
    cin >> s;
    int flag=0;
    for(int i=0; i<s.size(); i++) {
      if(s[i]=='0') {
        flag++;
        break;
      }
      if(s[i]=='?') {
        flag++;
      }
      if(s[i]=='1' && s[i-1]!='?') {
        flag=0;
      }
      if(s[i]=='1' && s[i+1]=='0') {
        flag=1;
      }
      if(s[s.size()-1]=='1') {
        flag = 1;
      }
    }
    cout << flag << '\n';
  }

  return 0;
}