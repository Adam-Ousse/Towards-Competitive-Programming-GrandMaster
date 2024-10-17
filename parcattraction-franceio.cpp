#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N,R;
    cin>>N>>R;
    vector<int> arr(N+1,0);
    for(int i=0;i<N;i++){
       cin>>arr[i];   
    }
    for(int i=1;i<N;i++){
     arr[i]+=arr[i-1];   
    }
    int D,F;
    for(int i=0;i<R;i++){
        cin>>D>>F;
        if (D==1)
            cout<<arr[F-1]<<" ";
        else
        cout<<arr[F-1]-arr[D-2]<<" ";
    }
    return 0;
}