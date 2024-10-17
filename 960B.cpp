#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k1,k2,k;
    cin>>n>>k1>>k2;
    k=k1+k2;
    vector<ll> A(n);
    vector<ll>B(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        cin>>B[i];
    }
    priority_queue<ll> pq;
    for(int i=0;i<n;i++){
        ll temp = A[i]-B[i];
        pq.push(abs(temp));
    }
    while(k>0 ){
        ll top = pq.top();
        pq.pop();
        k--;
        pq.push(abs(top-1));
    
    }
    ll result = 0;
    while(pq.size()>0){
        ll temp= pq.top();
        pq.pop();
        result+=temp*temp;
    }
    cout<<result<<endl;
    return 0;
    }