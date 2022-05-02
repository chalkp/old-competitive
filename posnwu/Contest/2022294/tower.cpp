#include <bits/stdc++.h>
using namespace std;

struct loc {
  int tower, cunt;
  struct loc* left;
  struct loc* right;
  loc();
  loc(int x, int y) {
    this->cunt = x;
    this->cunt = y;
    this->left = nullptr;
    this->right = nullptr;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  return 0;
}