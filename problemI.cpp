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
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        map<int,int> A;
        int maxx = INT_MIN;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            if(x>maxx){
                maxx=x;
            }
            A[x]++;
        }
        int result=0;
     
        for( auto& pair: A){
            result += pair.second/pair.first;
            A[pair.first]= pair.second % pair.first;
        }
        int temp =0;
        for( auto& pair: A){
            if(pair.second!=0 && pair.first!=1){
                temp+=pair.second;
                if(temp>=pair.first){
                    result++;
                    temp -= pair.first;
                }
            }
        }
        
        cout<<result<<endl;
    }
    return 0;
}
// 111 22 2 333 33 444

