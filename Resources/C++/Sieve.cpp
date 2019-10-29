// The sieve is one of the most efficient ways to find all primes smaller than n when n is smaller than 10 million or so.
// Here are the few tricks for Sieve for caculating the divisors of number and Biggest Prime Divisor :)

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    //Divisor Sieve O(n log n)
    int divisors[n + 1]{0};
    for (int i = 1; i <= n; ++i)
     for (int j = i; j <= n; j += i)
      ++divisors[j];

    //Prints No of divisors from 1 to N
    for(int i=1;i<=n;i++){
        cout<<divisors[i]<<" ";
    }
    
    //Biggest Prime Divisor Sieve O(n log log n)
    int big[n + 1] = {1, 1};
    for (int i = 1; i <= n; ++i)
     if (big[i] == 1)
      for (int j = i; j <= n; j += i)
       big[j] = i; 

    for(int i=1;i<=n;i++){
        cout<<big[i]<<" ";
    }
    
}
