#include<bits/stdc++.h>
using namespace std;
int dp[45010];
int main()
{
    int num,sum=0,i,n,mi=1<<30,ans1,ans2;
    scanf("%d",&n);
    dp[0]=1;
    while(n--){
        scanf("%d",&num);
        sum+=num;
        for(i=45000;i>=num;i--){
            if(dp[i-num]){
                dp[i]=1;
            }
        }
    }
    for(i=1;i<=sum;i++){
        if(dp[i]){
            if(abs(sum-2*i)<mi){
                mi = abs(sum-2*i);
                ans1 = i,ans2=sum-i;
            }
            if(ans1 > ans2){
                swap(ans1,ans2);
            }
        }
    }
    printf("%d %d\n",ans1,ans2);
    return 0;
}
