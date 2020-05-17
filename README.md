# 第一题
代码：
```cpp
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
    cout << v-dp[v];
}
```
构思：知状态转移方程
```latex
dp[j] = max(dp[j], dp[j-a[i]]+a[i])
```
