#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  long long int k, x, ans = 1;
  cin >> n >> k >> x;
  vector<long long int> A(n);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  // sorted input
  // for (int i = 0; i < n ; i++) {
  //   cout<<A[i]<<",";
  // }
  // cout<<endl;
  map<long long int, long long int> M;
  for (int i = 0; i < n - 1; i++) {
    long long int diff = A[i + 1] - A[i];
    if (diff > x) {
      if (M.count(diff)!=0) {
        M[diff]++;
        ans++;
      } else {
        M[diff] = 1;
        ans++;
      }
    }
  }
  // for (const auto &entry : M) {
  //   cout << "deference " << entry.first << " : ";
  //   for (int i = 0; i < entry.second.size(); i++) {
  //     cout << entry.second[i] << " ,";
  //   }
  //   cout<<endl;
  // }

  for (auto &entry : M) {
    while (k > 0 && entry.second > 0) {

      long long int diff = entry.first;
      // (diff /x) <=k
      // diff = 7*x
      //   diff/x => 7 , diff=0 ,
      //   diff/x -1 => 6 , diff=x
      // diff - b*x = x
      //   diff = x(b+1)
      // diff/x -1 = b
      long long int b;
      if(diff%x ==0){
        b = diff / x -1;
      }else{
        b = diff / x;
      }
      
      if (b <= k) {
        k -= b;
        entry.second--;
        ans--;
      } else {
        k = 0;
      }
    }
  }
  // cout<<"result "<<endl;
  cout << ans << endl;
  // M[difference>x]=>{index of groups }
  // 1,1,5,8,12,13,20,22
  // B = [0,2,6];
  // diff_groupe1_group2 = A[B[1]]-A[B[1]-1]

  return 0;
}