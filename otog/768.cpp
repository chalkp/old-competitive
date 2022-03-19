#include<bits/stdc++.h>
#define vec vector
#define umap unordered_map
#define endll '\n'
using namespace std ;

vec<bool>prime(1000001 , true);

int main(){
    ios_base :: sync_with_stdio(0),cin.tie(0);

    for(int i = 2 ; i <= 1000000 ; i ++){
        if(i == 2 || prime[i]){
            for(int j = i * i ; j <= 1000000 ; j += i){
                prime[j] = false ;
            }
        }
    }
    return 0 ;
}
