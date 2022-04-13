#include <bits/stdc++.h>
using namespace std;

const int N = 5e3+7;

struct student{
  string name;
  int score;
  bool operator < (const student &dickhead) const {
    if(score == dickhead.score) {
      return name < dickhead.name ;
    }
    return score > dickhead.score ;
  }
};

student arr[N];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, k;
  cin >> n >> k;
  for(int i=0; i<n; i++) {
    cin >> arr[i].name;
    cin >> arr[i].score;
  }
  sort(arr, arr+n);
  for(int i=0; i<k; i++) {
    cout << arr[i].name << ' ' << arr[i].score << '\n';
  }

  return 0;
}