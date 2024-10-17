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
    int n;
    cin>> n;
    while(n--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(abs(a)<abs(b)){
            swap(a,b);
        }
        if((a<=0 && b<=0) ||( a>=0 && b>=0)){
            if(c*2<d){
                cout<<abs(a+b)*c<<endl;
            }else{
                cout<<abs(b)*d + (abs(a)-abs(b))*c<<endl;
            }
        }else{
            if(c*2<d){
                cout<<(abs(a)+abs(b))*c<<endl;
            }else{
                cout<< abs(b)*d + (abs(a)+abs(b))*c<<endl;
            }
        }
    }

    return 0;
}