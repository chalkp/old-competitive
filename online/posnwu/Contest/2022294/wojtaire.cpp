#include <bits/stdc++.h>

using namespace std;

map<string,vector<string>> mp;
int admin_log, n;
string s;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  cin >> n;

  getline(cin, s);
  for(int i=0; i<n; i++) {
    getline(cin, s);
    string tmp="";
    string channel_name="";
    int cmd=0;
    for(char c: s) {
        if(c==' ' && cmd<2) {
            if(cmd==0){
                if(tmp!="send") {
                    cmd=-1;
                    break;
                }
                cmd++;
            } else if(cmd==1) {
                channel_name=tmp;
                cmd++;
            }
            tmp = "";
        } else {
            tmp += c;
        }
    }

    if(cmd==-1 || tmp=="" || cmd<2) {
        admin_log++;
    } else {
        mp[channel_name].push_back(tmp);
    }
  }

  if(admin_log) {
      cout << "=== admin log ===\n";
      for(int i=0 ; i<admin_log ; i++) {
          cout << "The format is not supported\n";
      }
  }

  for(pair<string, vector<string>> x: mp) {
    cout << "=== " << x.first << " ===\n";
    for(string msg: x.second) {
      cout << "Woltaire: " << msg << "\n";
    }
  }

  return 0;
}