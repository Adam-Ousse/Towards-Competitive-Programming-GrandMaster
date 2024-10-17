#include<bits/stdc++.h>
using namespace std;

void new_position(pair<int,int>& position, char move){
    if(move=='W'){
        position.first-=1;
    }else if(move=='E'){
        position.first+=1;
    }else if(move=='N'){
        position.second+=1;
    }else if(move=='S'){
        position.second-=1;
    }
}
struct pair_hash {
    template <class T1, class T2>
    std::size_t operator()(const std::pair<T1, T2>& p) const {
        auto hash1 = std::hash<T1>{}(p.first);
        auto hash2 = std::hash<T2>{}(p.second);
        return hash1 ^ (hash2 << 1); // Combine the two hash values
    }
};

// Define an equality function for std::pair
struct pair_equal {
    template <class T1, class T2>
    bool operator()(const std::pair<T1, T2>& p1, const std::pair<T1, T2>& p2) const {
        return p1.first == p2.first && p1.second == p2.second;
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        unordered_set<pair<int, int>, pair_hash, pair_equal> mySet;
        pair<int,int> currentPosition= {0,0};
        mySet.insert(currentPosition);
        long long int result = 0;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            new_position(currentPosition,s[i]);
            if(mySet.find(currentPosition)!=mySet.end()){
                result+=1;
                
            }else{
                result+=5;
                mySet.insert(currentPosition);
            }
            
        }
        cout<<result<<endl;
    }
    


    return 0;
}