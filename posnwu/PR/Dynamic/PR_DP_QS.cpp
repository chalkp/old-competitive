#include<bits/stdc++.h>
#define ll long long
using namespace std ;

const int N = 100002 ;
ll arr[N];
ll cluster[1000];

void preprocess(int n , int sz){

    for(int i = 0 ; i < n ; i ++ ){
        cluster[i / sz] += arr[i] ;
    }
    return ;
}

ll query(int l , int r , int sz) {
    ll sum = 0 ;
    while(l < r && l % sz != 0){
        sum += arr[l] ;
        l ++ ;
    }
    while(l + sz <= r){
        sum += cluster[l / sz] ;
        l += sz ;
    }
    while(l <= r){
        sum += arr[l] ;
        l ++ ;
    }
    return sum ;
}

int main () {

    ios_base :: sync_with_stdio(0) , cin.tie(0) ;
    int n , q , sz ; cin >> n ;
    for(int i = 0 ; i < n ; i ++ )cin >> arr[i] ;
    sz = sqrt(n) ;
    preprocess(n , sz) ;
    cin >> q ;
    while(q -- ){
        int l , r ; cin >> l >> r ;
        cout << query(l , r , sz) << '\n' ;
    }
    return 0 ;
}
