/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
#include<stdlib.h>
int a[15],b[15],n,r,k,cou=0;
void permu(int state){
int i;
if(state==r){
    cou++;
    if(cou==k){
        for(i=0;i<r;i++)
            printf("%d ",b[i]);
        exit(0);
    }
    return ;
}
for(i=1;i<=n;i++){
    if(a[i]!=1){
        a[i]=1;
        b[state] = i;
        permu(state+1);
        a[i]=0;
    }
}
}
int main()
{
scanf("%d %d %d",&n,&r,&k);
permu(0);
    return 0;
}
