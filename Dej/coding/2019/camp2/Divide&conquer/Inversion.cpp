#include<bits/stdc++.h>
using namespace std;
long long n,a[100100],b[100100],ans;
void P(long long l,long long r){
    if(l >= r) return ;
    long long mid = (l+r)/2;
    P(l,mid);
    P(mid+1,r);
    long long i=l,j=mid+1,k=l;
    while(i<=mid&&j<=r){
        if(a[i]<=a[j]){
            b[k++]=a[i++];
        }else{
            b[k++] = a[j++];
            ans += mid - i + 1;
        }
    }
    while(i<=mid) b[k++] = a[i++];
    while(j<=r) b[k++] = a[j++];
    for(i=l;i<=r;i++){
        a[i]=b[i];
    }
}
int main()
{
    long long i;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    P(0,n-1);
    printf("%lld",ans);
    return 0;
}
