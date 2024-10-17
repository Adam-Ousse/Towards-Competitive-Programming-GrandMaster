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

const ll INF = LLONG_MAX;

int main() {
    fast_io();
  int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        unordered_map<string,ll> a;
        a["00"] = INF;
        a["11"]= INF;
        a["01"] =INF;
        a["10"]=INF;
        for(int i=0;i<n;i++){
            ll m;
            string s;
            cin >> m >> s;
            if(m < a[s]){
                a[s] = m;
            }
        }
        ll answer = INF;

        if(a["11"] < answer){
            answer = a["11"];
        }
        if(a["01"] < INF && a["10"] < INF){
            if(a["01"] + a["10"] < answer){
                answer = a["01"] + a["10"];
            }
        }
        if(answer < INF){
            cout << answer << endl;
        }
        else{
            cout << "-1"<<endl;
        }
    }
    return 0;
}

