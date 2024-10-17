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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a,mi=LLONG_MAX, Long,ma=LLONG_MIN;
        while(n--){
            cin>>a;
            if(a>ma){
                ma=a;
            }
            if(mi>a){
                mi=a;
            }
        }
        cout<<ma-mi<<endl;
    }   




    return 0;
}