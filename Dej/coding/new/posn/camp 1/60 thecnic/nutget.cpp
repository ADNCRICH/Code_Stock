/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<bits/stdc++.h>int a[1010
using namespace std;
int dp[110];
int main()
{
dp[0]=1;
int i,n;
for(i=6;i<=100;i++){
    if(i>=6&&dp[i-6]==1) dp[i]=1;
    if(i>=9&&dp[i-9]==1) dp[i]=1;
    if(i>=20&&dp[i-20]==1) dp[i]=1;
}
scanf("%d",&n);
if(n<6){
    printf("no"); return 0;
}
for(i=6;i<=n;i++)
    if(dp[i])
        printf("%d\n",i);
    return 0;
}
