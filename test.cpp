
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>> t;
    cout<<t<<"i am the goat";
    for (int i=0;i<t;i++){
        int n;
        std::cin>>n;
        std::vector<int> tab(n);
        for (int j=0;j<n;j++){
            int a;
            std::cin>>a;
            tab[j]=a;
        }
        int k=0;
        int somme=0;
        int maxi=0;
        while(k<n-1){
            if (k<n && tab[k]>=tab[k+1]){
                somme+=1;
                if (k<n && tab[k]>=maxi){
                    maxi=tab[k];
                    }                
                k=k+2;
            }
            else{
                somme+=1;
                if (k+1<n && tab[k+1]>=maxi){
                    maxi=tab[k+1];
                    }       
                k=k+3;
            }
        }
        cout<<somme+maxi;
    }
return 0;
}