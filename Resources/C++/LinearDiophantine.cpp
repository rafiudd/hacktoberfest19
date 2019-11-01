// Linear Diophantine Equation: Assumption A and B > 0, if A = 0 and B = 0 then C should be 0 to satisfy the condition.

// Example for 4x+10y=8.
// Step 1: g=GCD(4,10)=2. Since 2 divides 8, solution exists. 
// Step 2: a = 4/2, b = 10/2, c = 8/2. We will find solution of 2x+5y=4. 
// Step 3: Using ext_gcd() we get (x,y) = (−2,1). But this is for ax + by = 1. We need to multiply 4. So our solution is (−8,4).
// Eg:
// ax+by=2×(−8) + 5×(4) = −16 + 20 = 4 = c. 

#include<bits/stdc++.h>
using namespcae std;

int d;  // just needed for Ext_Euclid it's GCD, but nit required in Diophantine function. So written for ext_euclid

int ext_euclid(int a, int b, int *x, int *y){
    if(b == 0){
        d = a;
        *x = 1;
        *y = 0;
    }
    else{
        ext_euclid(b, a%b, x, y);
        int temp = *x;
        *x = *y;
        *y = temp - (a/b)*(*y);
    }
}

bool diophantine(int A, int B, int C ,int *x, int *y){
    int g = __gcd(A,B);
    if(C%g)    return false;   // Step 1: No soln

    int a = A/g, b = B/g, c = C/g;
    if(__gcd(a,b) < 0)  c = -c;         // Step 2

    ext_euclid(a, b, x, y); // Step 3 starts we get x and y for ax + by = 1
    *x *= c, *y *= c;       // We get ax + by = c, by multiplying by c
    return true;
}

int main(){
    int A,B,C,x,y;
    cin>>A>>B>>C;
    if(diophantine(A,B,C,&x,&y)){
        cout<<x<<" "<<y<<"\n";
        
        // Important To See
        int g = __gcd ( A, B );
        int k = 1; //Use different value of k to get different solutions
        printf ( "Another Possible Solution (%d %d)\n", x + k * ( B / g ), y - k * ( A / g ) );
    
    }
    else cout<<"No Solution";

}
