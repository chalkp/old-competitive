#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
long long int arr[N], idx[N];

map<long long int, int> m;

class Fenwick {
public :
  long long fw[N];

  void update(int ix, long long value) {
    for(; ix<N; ix+=(ix & -ix)) {
      
    }
  }
};