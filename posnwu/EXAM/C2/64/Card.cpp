#include <bits/stdc++.h>
using namespace std;

int a, b, c;
char cmd;
deque<int> card;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  cin >> a >> b >> c;
  for(int i=0; i<a; i++) {
    card.push_back(i);
  }
  while(c--) {
    cin >> cmd;
    if(cmd=='A') {
      card.push_back(card.front());
      card.pop_front();
    } else {
      int tmp = card.front();
      card.pop_front();
      card.push_back(card.front());
      card.pop_front();
      card.push_front(tmp);
    }
  }
  for(int i=b-1; i<=b+1; i++) {
    cout << card[i] << '\n';
  }
  return 0;
}