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
    cin>> t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if (a > b) {
            swap(a, b);
        }
        if(a%2==0){
            if(b==a/2){
                cout<<"No"<<endl;
            }else{
                cout<<"Yes"<<endl;
            }
        }else if(b%2==0){
            if(a==b/2){
                cout<<"No"<<endl;
            }else{
                cout<<"Yes"<<endl;
            }
        }else{
            cout<<"No"<<endl;
        }

    }




    return 0;
}