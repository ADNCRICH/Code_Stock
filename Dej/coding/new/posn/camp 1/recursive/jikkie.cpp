/*
    TASK: Intro01
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<stdio.h>
int A,B,C,mark[21][21][21],d[21];
void play(int a,int b,int c){
if(a<0||b<0||c<0||a>A||b>B||c>C)  return ;
if(mark[a][b][c]) return ;
mark[a][b][c] = 1;
if(a==0)
    d[c]=1;
    play(0,a+b,c); play(a-B+b,B,c);
    play(0,b,a+c); play(a-C+c,b,C);
    play(a+b,0,c); play(A,b-A+a,c);
    play(a,0,c+b); play(a,b-C+c,C);
    play(a+c,b,0); play(A,b,c-A+a);
    play(a,c+b,0); play(a,B,c-B+b);
}
int main()
{
int i;
scanf("%d %d %d",&A,&B,&C);
play(0,0,C);
for(i=0;i<=20;i++){
    if(d[i]==1)
        printf("%d ",i);
}
    return 0;
}
