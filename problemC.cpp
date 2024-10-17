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


int main() {
    fast_io();
    int q;
    cin>>q;
    while(q--){
        ll m,a,b,k;
        cin>>m>>a>>b;
        k = min(a,b);
        if(m%k ==0){
            cout<<m/k<<endl;
        }else{
            cout<<m/k +1<<endl;
        }
    }




    return 0;
}