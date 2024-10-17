#include <bits/stdc++.h>
using namespace std;
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<long long>
#define vd vector<double>
#define LOCAL
#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << (x) << endl;
#else
    #define debug(x)
#endif


int main() {
    fast_io();
    int k,w;
    ll n;
    cin>>k>>n>>w;
    ll sum = k * (w*(w+1))/2;
    if (sum > n) {
        cout<<sum-n;
    } else {
        cout<<0;
    }
    debug(sum);



    return 0;
}