#include<bits/stdc++.h>
using namespace std;
//passed
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<long long ,long long>> seg(n);
        vector<long long> left(n);
        vector<long long> right(n);
        for(int i=0;i<n;i++){
            long long l,r;
            cin>>l>>r;
            left[i]=l;
            right[i]=r;
            seg[i]={l,r};
        }
        sort(left.begin(),left.end());
        sort(right.begin(),right.end());
        int minn=INT_MAX;
        for(int i=0;i<n;i++){
            int l = lower_bound(right.begin(),right.end(),seg[i].first)-right.begin();
            int r = max(0, n - (int)(upper_bound(left.begin(), left.end(), seg[i].second)-left.begin()));
            minn = min(minn,l+r);
        }
        cout<<minn<<endl;
    }
    return 0;
}