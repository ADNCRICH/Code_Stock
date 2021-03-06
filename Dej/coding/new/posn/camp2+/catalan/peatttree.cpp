/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[1010];
int play(int n){
    int i,a,b,sum;
    if(dp[n]!=-1) return dp[n];
    for(i=0;i<n;i++){
        a=(dp[i]==-1)?play(i):dp[i];
        a%=9973;
        b=(dp[n-1-i]==-1)?play(n-1-i):dp[n-1-i];
        b%=9973;
        sum+=a*b;
        sum%=9973;
    }
    return dp[n]=sum%9973;
}
int main()
{
    int q,n;
    memset(dp,-1,sizeof dp);
    dp[0]=dp[1]=1;
    play(1000);
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        printf("%d\n",dp[n-1]);
    }
    return 0;
}
