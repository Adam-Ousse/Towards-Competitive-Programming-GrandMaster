// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;
//PASSED
#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int index_a=s.find('a');
        int left_pointer = index_a-1;
        int right_pointer = index_a+1;
        int next_alpha = 1;
        bool flag = true;
        if(index_a==-1){
            cout<<"NO"<<endl;
        }else{
            while(left_pointer>-1 || right_pointer<s.size()){
                if(left_pointer>-1 &&s[left_pointer]=='a'+next_alpha){
                    next_alpha++;
                    left_pointer--;
                }else if (right_pointer<s.size() && s[right_pointer]=='a'+next_alpha){
                    next_alpha++;
                    right_pointer++;
                }else{
                    cout<<"NO"<<endl;
                    flag=false;
                    break;
                }
            }
            if(flag)
            cout<<"YES"<<endl;
        }
    }
    
    return 0;   
    }