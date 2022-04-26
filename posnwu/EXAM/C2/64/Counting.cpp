#include <bits/stdc++.h>
using namespace std;

int n, s, t, p;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    cin >> n;
    while(n--) {
        cin >> s >> t >> p;
        int cunt=0;
        for(int i=s; i<=t; i++) {
            int h=i;
            while(h>0) {
                if(h%10 == p) {
                    cunt++;
                }
                h/=10;
            }
        }
        cout << cunt << '\n';
    }

    return 0;
}