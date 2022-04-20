#include <bits/stdc++.h>
using namespace std;

int n, m, p, a[10007];
bool sum[4000008];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> n >> m;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        for(int j=0; j<i; j++) {
            sum[a[i]+a[j]] = true;
        }
    }
    for(int i=0; i<m; i++) {
        cin >> p;
        if(sum[p]) {
            cout << "YES";
        } else  {
            cout << "NO";
        }
        cout << '\n';
    }

    return 0;
}