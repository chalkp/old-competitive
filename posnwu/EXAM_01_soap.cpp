#include <bits/stdc++.h>
#define pb push_back
using namespace std;
const int N = 1e5+2;
vector<int> soap;

void solve() {
    int n, q;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> q;
        soap.pb(q);
    }
    sort(soap.begin(), soap.end());
    cin >> q;
    while(q--) {
        cin >> n;
        cout << lower_bound(soap.begin(), soap.end(), n) - soap.begin() << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}
