#include <bits/stdc++.h> 
using namespace std; 
  
int josephus(int n, int k) 
{ 
    if (n == 1) 
        return 1; 
    else
        return (josephus(n - 1, k) + k) % n+1 ; 
} 
  
int main() 
{ 
    int t; cin>>t;
    while(t--){
        int n ; 
        int k; cin>>n>>k; 
        cout <<  josephus(n, k)<<endl; 
    }
    return 0; 
} 

