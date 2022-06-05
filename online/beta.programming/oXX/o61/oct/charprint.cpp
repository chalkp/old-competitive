#include <bits/stdc++.h>
using namespace std;

const int N = 3e5+7;
string s, ss;
int mode;
long long int tree[N];
queue<long long int> q[69];

void up(int id, int x) {
  while(id <= s.length()) {
    tree[id] += x;
    id += (id & -id);
  }
}

long long int query(int id) {
  long long int sum = 0;
  while(id>0) {
    sum += tree[id];
    id -= (id & -id);
  }
  return sum;
}

long long int ssssssssssssss;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> mode >> s >> ss;
  for(int i=0; i<s.length(); i++) {
    q[s[i]-'a'].push(i+1);
  }
  if(mode) {
    for(int i=1; i<s.length(); i++) {
      up(i, 1);
    }
    for(int i=0; i<ss.length(); i++) {
      if(q[ss[i]-'a'].empty()) {
        cout << "-1";
        return 0;
      }
      ssssssssssssss += query(q[ss[i]-'a'].front());
      up(q[ss[i]-'a'].front(), -1);
      q[ss[i]-'a'].pop();
    }
  } else {
    for(int i=0; i<ss.length(); i++) {
      if(q[ss[i]-'a'].empty()) {
        cout << "-1";
        return 0;
      }
      ssssssssssssss += q[ss[i]-'a'].front();
      q[ss[i]-'a'].pop();
    }
  }
  cout << ssssssssssssss;

  return 0;
}