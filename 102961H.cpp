//Kadane’s Algorithm 

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
    vector<ll> X(n);
    
    for(int i=0;i<n;i++){
        cin>>X[i];
    }
    ll current_sum =X[0];
    ll max_sum = X[0];
    int i=1;
    while(i<n){
        current_sum = max(X[i],current_sum+X[i]);
        max_sum = max(current_sum,max_sum);
        i++;
    }
    cout<<max_sum;

    return 0;
}