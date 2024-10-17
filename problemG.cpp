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
struct pair_hash {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2; 
    }
};
long long compute_hash(string const& s) {
    const int p = 31;
    const int m = 1e9 + 9;
    long long hash_value = 0;
    long long p_pow = 1;
    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}
long long compute_hash_2(string const& s) {
    const int p = 67;
    const int m = 1e9 + 9;
    long long hash_value = 0;
    long long p_pow = 1;
    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}
int main() {
    fast_io();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;   
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && s[j] == s[i]) j++;
            if (j - i >= 3) {
                s = s.substr(0, i + 2) + s.substr(j);
                n = s.size();
            } else {
                i = j;
            }
        }
        unordered_set<pair<ll, int>, pair_hash> uniq_string;
        
        for(int i = 0; i < n - 1; i++) {
            string modified = s.substr(0, i) + s.substr(i + 2);
            uniq_string.insert({compute_hash(modified), compute_hash_2(modified)});
        }
        cout << uniq_string.size() << endl;
    }

    return 0;
}