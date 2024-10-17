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
        vector<int> x(3);
        for(int i=0;i<3;i++){
            cin>>x[i];
        }
        sort(x.begin(),x.end());
        cout<<abs(x[0]-x[1]) + abs(x[1]-x[2])<<endl;
    }   




    return 0;
}