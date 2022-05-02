#include<bits/stdc++.h>

#define ll long long

using namespace std ;

const int N = 100002 ;

ll arr[N] ;
ll find_idx[N];
map<ll , int>mpp ;

class Fenwick {

    public :
        ll fw[N] ;

        void update(int idx , ll val){

            for(; idx < N ; idx += (idx & -idx)){
                fw[idx] += val ;
            }
            return ;
    
        }

        ll query(int idx){
            ll res = 0 ;
            for(; idx > 0 ; idx -= (idx & -idx)){
                res += fw[idx] ;
            }
            return res ;
        }

}fw ;

int main(){

    ios_base::sync_with_stdio(0) , cin.tie(0);

    int n ; cin >> n ;
    ll cnt = 0 ;
    for(int i = 0 ; i < n ; i ++ ){
        cin >> arr[i] ;
        find_idx[i] = arr[i] ;
    }

    sort(find_idx , find_idx + n);

    for(int i = n - 1 ; i >= 0 ; i -- ){

        ll val = arr[i] ;
        
        int idx = lower_bound(find_idx , find_idx + n , val) - find_idx + 1 ;
        cnt += fw.query(idx) - mpp[val] ;

        fw.update(idx , 1) ;
        mpp[val] ++ ;
       
    }
    cout << cnt ;
    return 0 ;  
}