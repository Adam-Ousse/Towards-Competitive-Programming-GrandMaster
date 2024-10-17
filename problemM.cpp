#include <bits/stdc++.h>
using namespace std;
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<long long>
#define vd vector<double>
#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << (x) << endl;
#else
    #define debug(x)
#endif
const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};

int main() {
    fast_io();
    int t;
    cin >> t;
    
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m, 0));
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                cin >> grid[i][j];
            }
        }
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        long long max_volume = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]>0 && !visited[i][j]){
                    ll curr_vol =0;
                    queue<pair<int,int>> q;
                    q.push(make_pair(i,j));
                    visited[i][j]=true;
                    while(!q.empty()){
                        pair<int,int> curr_cell = q.front();
                        q.pop();
                        curr_vol += grid[curr_cell.first][curr_cell.second];
                        for(int direction=0;direction<4;direction++){
                            int adj_x = curr_cell.first+ dx[direction];
                            int adj_y = curr_cell.second + dy[direction];
                            if(adj_x>=0 && adj_x<n && adj_y>=0&& adj_y<m){
                                if(grid[adj_x][adj_y]>0 && !visited[adj_x][adj_y]){
                                    visited[adj_x][adj_y]=true;
                                    q.push(make_pair(adj_x,adj_y));
                                }
                            }
                        }
                    }
                    if(curr_vol>max_volume){
                        max_volume = curr_vol;
                    }
                }
            }
        }
        cout<<max_volume<<endl;
    }
        
    
    return 0;
}

