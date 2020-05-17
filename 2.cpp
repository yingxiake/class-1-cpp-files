#include<bits/stdc++.h>
 using namespace std;
 int main()
 {
   int v,n;
   cin >> v >> n;
   int a[n];
   int dp[v+1];
   memset(dp, 0, sizeof(dp));
 /*状态转移方程为：dp[j] = max(dp[j], dp[j-a[i]]+a[i])。*/
   for(int i=0; i<n; i++)
   {
     cin>>a[i];
     for(int j=v; j>=a[i]; j--)
     {
       dp[j] = max(dp[j], dp[j-a[i]]+a[i]);
     }
     if(dp[v]!=0)cout<<false;
     else 
     {
     for(int i=1;i<=n;i++)
     cout<<dp[i]<<" ";
     }
}
