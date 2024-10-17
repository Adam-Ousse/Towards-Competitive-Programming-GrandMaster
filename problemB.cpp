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
    ll N;
    int K;
    cin>>N>>K;
    vector<ll> a(K);
    vector<ll> b(K);
    for(int i=0;i<K;i++){
        cin >> a[i];
        b[i] = N/a[i];
        a[i] = N % a[i];
    }
    int mI = 0;
    for (int i = 1; i < K; i++) {
        if (a[i] < a[mI]) {
            mI = i;
        }
    }
    cout<<mI+1<<" "<<b[mI]<<endl;

    





    return 0;
}