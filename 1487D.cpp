#include<bits/stdc++.h>
using namespace std;
int countPythagoreanTriples(int n) {
    int count = 0;
    for (int a = 1; a * a <= n; ++a) {
        for (int b = 1; b <= n; ++b) {
            int c = a * a - b;
            if (c >= b && c <= n && a * a + b * b == c * c) {
                ++count;
            }
        }
    }
    return count;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<countPythagoreanTriples(n)<<endl;
    }

    return 0;


}