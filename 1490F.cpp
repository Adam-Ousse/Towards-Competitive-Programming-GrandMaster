#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    map<int, int> M;
    vector<long long int> A(n);
    for (int i = 0; i < n; i++) {
      cin >> A[i];
    }
    sort(A.begin(), A.end());
    A.push_back(A[n - 1] + 1);
    int temp = 1;
    int last_numb = A[0];
    for (int i = 1; i < n + 1; i++) {
      // cout<<"comparing"<<A[i]<<"with"<<last_numb<<endl;
      if (A[i] == last_numb) { // 3
        // cout<<"temp++"<<endl;
        temp++;
      } else {
        if (M.count(temp) != 0) {
          // cout<<temp<<"found in map"<<endl;
          M[temp]++;
          temp = 1;
          last_numb = A[i];
        } else {
          // cout<<temp<<"not found in map"<<endl;
          M[temp] = 1;
          temp = 1;
          last_numb = A[i];
        }
      }
    }
    // 2:2,1:1
    // for (auto it = M.begin(); it != M.end(); ++it) {
    //   cout<<it->first<<":"<<it->second<<endl;
    // }
    // long long int maxx=INT_MIN;
    // long long int C =0;

    // for (auto it = M.begin(); it != M.end(); ++it) {
    //   long long int temp = it->second *it->first ;
    //     if (temp> maxx) {
    //         C = it->first;
    //           maxx=temp;
    //     }
    // }
    // cout<<C<<" : "<<maxx<<"\n";

    long long int result = INT_MAX;
    long long int temp_result = 0;
    for (auto it = M.begin(); it != M.end(); ++it) {
      long long int C = it->first;
      for (auto it2 = M.begin(); it2 != M.end(); ++it2) {
        if (it2->first < C) {
          temp_result += it2->first * it2->second;
        } else if (it2->first > C) {
          temp_result += (it2->first - C) * it2->second;
        }
      }
      result = min(result, temp_result);
      temp_result = 0;
    }
    cout << result << endl;
  }

  return 0;
}