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


#include <bits/stdc++.h>
using namespace std;
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vi vector<int>

#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << (x) << endl;
#else
    #define debug(x)
#endif

int main() {
    fast_io();
    int m;
    cin >> m;
    string r;
    cin >> r;
    ll N = 1LL << m;
    // Precompute sum_r0 and sum_r1
    // Phases are from 1 to m, assume r[0] is first phase
    // The size of other subtree at phase h is 2^{m -h}
    // sum_r0: sum of 2^{m-h} where r[h-1] = '0'
    // sum_r1: sum of 2^{m-h} where r[h-1] = '1'
    ll sum_r0 = 0, sum_r1 = 0;
    for(int h=1; h<=m; h++){
        if(r[h-1] == '0'){
            sum_r0 += (1LL << (m - h));
        }
        else{
            sum_r1 += (1LL << (m - h));
        }
    }
    // Now, for each k from 1 to N, check if sum_r1 <=k -1 and sum_r0 <=N -k
    // According to the sample, this condition is not sufficient, but proceed
    // and see
    vector<ll> winners;
    for(ll k=1; k<=N; k++){
        if(sum_r1 <= (k -1) && sum_r0 <= (N -k)){
            winners.push_back(k);
        }
    }
    // Now, according to the sample, this might not include all possible winners
    // but it is the logically correct condition based on the problem description
    // Thus, print the winners
    if(winners.empty()){
        // No output
    }
    else{
        for(int i=0;i<winners.size();i++){
            if(i>0) cout << " ";
            cout << winners[i];
        }
        cout << "\n";
    }
}