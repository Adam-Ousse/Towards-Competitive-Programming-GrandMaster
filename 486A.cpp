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
    ll n;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<endl;
    }else{
        cout<< (-(n+1)/2)<<endl;
    }




    return 0;
}