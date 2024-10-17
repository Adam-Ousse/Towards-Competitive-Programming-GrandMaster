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

string binary_srch(vector<ll>& a, ll target){
    int left = 0;
    int right = a.size()-1;
    int mid = (left+right)/2;
    while(left <= right){ 
        if(a[mid]==target){
            return "YEs";
        }else{
            if(a[mid]>target){
                right=mid-1;
                
            }else{
                left = mid+1;
            }
        }
        mid = (left+right)/2;
    }
    return "NOooo";
}
int main() {
    fast_io();
    vector<ll> a = {1, 2, 3, 4, 6, 7, 8, 9, 10};
    cout<<binary_srch(a,4)<<endl;
    cout<<binary_srch(a,5)<<endl;




    return 0;
}