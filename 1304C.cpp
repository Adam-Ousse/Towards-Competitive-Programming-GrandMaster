#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    while(q--){
        int n;
        bool flag = true;
        cin>>n;
        n++;
        ll m;
        vector<ll> t(n);
        vector<ll> l(n);
        vector<ll> h(n);
        cin>>l[0];
        h[0]=l[0];
        t[0]=0;
        for(int i=1;i<n;i++){
            cin>>t[i]>>l[i]>>h[i];
            
            ll low = max(l[i],l[i]-(t[i]-t_1));
            ll up = min(h[i],temp+(t[i]-t_1));
            if(h[i]<low || l[i]>up){
                flag = false;
            }else{
                temp = 
            }
            
        }
    }
    return 0;
}