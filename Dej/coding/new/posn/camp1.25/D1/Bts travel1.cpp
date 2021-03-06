/*
    TASK: BST Travel1
    LANG: CPP
    AUTHOR: Kyrov
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int tree[1<<23];
char str[10];
void pre(int i){
    if(tree[i]==0) return;
    printf("%d\n",tree[i]);
    pre(2*i);
    pre(2*i+1);
}
void in(int i){
    if(tree[i]==0) return;
    in(2*i);
    printf("%d\n",tree[i]);
    in(2*i+1);
}
void bfs(int i){
    for(int i=1;i<1<<23;i++)
        if(tree[i]!=0)
            printf("%d\n",tree[i]);
}
void pos(int i){
    if(tree[i]==0) return;
    pos(2*i);
    pos(2*i+1);
    printf("%d\n",tree[i]);
}
int main()
{
    int n,num,run,i;
	scanf(" %s %d",str,&n);
	for(i=0;i<n;i++){
        scanf("%d",&num);
        run = 1;
        while(1){
            if(tree[run]==0)    break;
            if(num<tree[run])
                run = 2*run;
            else
                run = 2*run+1;
        }
        tree[run]=num;
	}
	if(!strcmp(str,"PRE")) pre(1);
	if(!strcmp(str,"POS")) pos(1);
	if(!strcmp(str,"INF")) in(1);
	if(!strcmp(str,"BFS")) bfs(1);
    return 0;
}
