#include<bits/stdc++.h>

using namespace std;

int m , n ;

bool is_valid(int x , int y){
    if(x < 0 || x >= m || y < 0 || y >= n)return false;
    return true ;
}

struct coor{
    int x , y , type , t ;
};

queue<coor>q ;

string graph[51] ;

bitset<51>visited[51] ;

int dir[] = {0 , 0 , -1 , 1};

int main(){

    ios_base :: sync_with_stdio(0) , cin.tie(0) ;

    cin >> m >> n ;

    coor str , stp ;
    for(int i = 0 ;  i < m ; i ++ ){
        cin >> graph[i] ;
    }

    for(int i = 0 ; i < m ; i ++ ){
        for(int j = 0 ;  j < n ; j ++ ){
            if(graph[i][j] == '*')q.push({i , j , 1 , 0});
        }
    }

    for(int i = 0 ; i < m ; i ++ ){
        for(int j = 0 ; j < n ; j ++ ){
            if(graph[i][j] == 'S')q.push({i , j , 0 , 0});
        }
    }

    while(!q.empty()){
        auto temp = q.front();
        q.pop() ;
        if(temp.type == 0 && graph[temp.x][temp.y] == 'D'){
            cout << temp.t ;
            return 0 ;
        }
        if(temp.type){
            for(int i = 0 ; i < 4 ; i ++ ){
                int nowx = temp.x + dir[i] , nowy = temp.y + dir[3 - i] ;
                if(!is_valid(nowx , nowy))continue ;
                if(visited[nowx][nowy] || graph[nowx][nowy] == 'X')continue ;
                if(graph[nowx][nowy] != 'D'){
                    graph[nowx][nowy] = '*' ;
                    visited[nowx][nowy] = true ;
                    q.push({nowx , nowy , 1 , 0});
                }
            }
        }
        if(temp.type == 0){
            for(int i = 0 ; i < 4 ; i ++ ){
                int nowx = temp.x + dir[i] , nowy = temp.y + dir[3 - i] ;
                if(!is_valid(nowx , nowy))continue ;
                if(visited[nowx][nowy] || graph[nowx][nowy] == '*' || graph[nowx][nowy] == 'X')continue ;
                q.push({nowx , nowy , 0 , temp.t + 1}) ;
            }
        }
    }
    cout << "KAKTUS" ;

    return 0 ;
}