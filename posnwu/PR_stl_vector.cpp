#include <bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int> v;

void e() {
    for(auto it : v) {
        cout << it << ' ';
    }
}

void solve() {
    int q;
    cin >> q;
    while(q--) {
        char op;
        cin >> op;
        switch(op) {
        case 'a':
            int x;
            cin >> x;
            v.pb(x);
            break;
        case 'b':
            sort(v.begin(), v.end());
            break;
        case 'c':
            reverse(v.begin(), v.end());
            break;
        case 'd':
            cout << v.size() << ' ';
            break;
        case 'e':
            e();
            break;
        case 'f':
            sort(v.begin(), v.end(), [](int a, int b){return (a>b);});
            break;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        solve();
        cout << '\n';
        v.erase(vec.begin(),vec.end());
    }

    return 0;
}
