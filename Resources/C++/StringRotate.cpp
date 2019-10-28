// Programme to rotate the string in O(N) time where N = length of String.
// This programme uses inbuilt std function reverse() and roate string rightwise by k characters

#include<bits/stdc++.h>
using namepsace std;

int main(){

    string s;
    cin>>s;
    int k;
    cin>>k;

    int n = s.size();
    
    // inbuilt function
    reverse(s.begin(),   s.begin()+k);
    reverse(s.begin()+k, s.end());
    reverse(aLL(s));

    cout<<s;

}
