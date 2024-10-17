#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,j;
    cin>>n;
    int c=n-1;

    vector<bool> A(n,false);
    for(int i=0;i<n;i++){
        cin>>j;
        A[j-1]=true;
        while(c>=0 && A[c]==1){
            cout<<c+1<<" ";
            c--;
        }
        cout<<endl;
    }
    return 0;
}