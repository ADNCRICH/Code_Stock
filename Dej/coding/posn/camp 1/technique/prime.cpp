/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
#include<math.h>
int a[10000000];
int n,i,j,m;
int main()
{
    scanf("%d",&n);
    if(n==1){
    printf("2\n"); return 0;
}
for(i=3;i<10000000;i+=2){
    a[i]=1;
}
m=sqrt(10000000);
for(i=3;i<m;i+=2){
    if(a[i]){
        for(j=i*i;j<10000000;j+=i){
            a[j]=0;
        }
    }
}
for(i=3,j=1;1;i+=2){
    if(a[i]){
        j++;
        if(j==n){
            printf("%d\n",i); return 0;
        }
    }
}
    return 0;
}
