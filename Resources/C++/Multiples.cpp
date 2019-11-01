// Multiple are In-Finite numbers, we will compute multiple of all number from 1 to MAX in O(MAXlog(MAX)).
// Eg: Factors(9): 9, 18, 27, 36, 45.....

#include<bits/stdc++.h>
using namespace std;
#define MAX 100000

int main(){
    std::vector<int> v[MAX];
    
    //Multiples of Number's
    for(int i = 1; i <= MAX; i++){
        for(int j = i; j < MAX; j+=i){
            v[i].push_back(j);                  
        }
    }

    for(int i = 1; i <= MAX; i++){
        for(auto x: v[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
