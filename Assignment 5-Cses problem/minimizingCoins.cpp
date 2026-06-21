#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
int main() {
  
  int n,k;
  cin>>n>>k;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  vector<int>dp(k+1, 1e9);
  dp[0]=0;
 
  
  
  
  for(int i=1;i<=k;i++){
      for(int p : v){
          
          if((i-p)>=0){
      dp[i] = min(dp[i],dp[i-p] + 1);
          }
  }
  }
  if(dp[k]==1e9){
  cout<<-1;
  }
  else{
      cout<<dp[k];
  }
  
  
  return 0;
 
  
  
}
