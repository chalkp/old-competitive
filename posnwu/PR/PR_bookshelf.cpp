#include <bits/stdc++.h>
using namespace std;

class shelf {
public:
  int book;
  shelf* next;
  void append(shelf &n) {
    next = &n;
    return;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  return 0;
}