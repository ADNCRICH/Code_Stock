/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[1000],b[1000];
int main()
{
int i,n;
long long sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n;i++)
    scanf("%d",&b[i]);
sort(a,a+n);
sort(b,b+n);
for(i=0;i<n;i++)
    sum+=((long long)a[i]*b[n-1-i]);
printf("%lld\n",sum);
    return 0;
}
