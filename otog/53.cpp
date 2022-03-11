#include <bits/stdc++.h>

const int N = 100002;

struct bottle {
  int h, index;
  bool operator < (const bottle &b) const {
    if(h != b.h) {
      return b.h > h;
    } else {
      return b.index < index;
    }
  }
};

bool arr[N];

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int n, m, h, count;
  std::priority_queue<bottle> prioq;
  std::queue<bottle> q;
  std::cin >> n >> m;
  for(int i=1; i<=n; i++) {
    arr[i] = true;
    std::cin >> h;
    prioq.push({h, i});
  }

  for(int i=0; i<m; i++) {
    std::cin >> h;
    count=0;
    while((!prioq.empty()) && prioq.top().h > h) {
      if(arr[prioq.top().index]) {
        q.push(prioq.top());
      }
      prioq.pop();
    }

    while(!q.empty()) {
      auto it = q.front();
      q.pop();
      for(int j=it.index-1; j<=it.index+1; j++) {
        if(arr[j]) {
          arr[j]=0;
          count++;
        }
      }
    }
    std::cout << count << '\n';
  }

  return 0;
}
