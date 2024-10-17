#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>m>>n;
    vector<vector<int>> B(m,vector<int>(n,1));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>B[i][j];
        }
    }
    
    vector<vector<int>> A(m,vector<int>(n,1));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(B[i][j]==0){
                for(int k=0;k<m;k++){
                    A[k][j] =0;
                }
                for(int k=0;k<n;k++){
                    A[i][k] = 0;
                }
               
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int result =0;
            for(int k=0;k<m;k++){
                result |= A[k][j];
            }
            for(int k=0;k<n;k++){
                result |= A[i][k];
            }
            if(B[i][j]!=result){
                cout<<"NO"<<endl;
                return 0;
        }
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}
