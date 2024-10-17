#include<bits/stdc++.h>
using namespace std;
bool isCorrectSet(vector<char>& card1, vector<char>& card2, vector<char>& card3, int k) {
    for (int i = 0; i < k; ++i) {
        if (!((card1[i] == card2[i] && card2[i] == card3[i]) || (card1[i] != card2[i] && card2[i] != card3[i] && card1[i] != card3[i]))) {
            return false;
        }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<vector<char>> A(n, vector<char>(k, 'S'));
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>A[i][j];
        }
    }
    int result = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int l = j + 1; l < n; ++l) {
                if (isCorrectSet(A[i], A[j], A[l], k)) {
                    ++result;
                }
            }
        }
    }
    cout<<result<<endl;
}