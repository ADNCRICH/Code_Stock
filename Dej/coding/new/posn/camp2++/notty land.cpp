/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int mark[100100],scc[100100],cnt=0;
vector<int> g[100100],gt[100100];
stack<int> s;
void dfs(int u){
    if(mark[u]) return ;
    mark[u]=1;
    for(auto x :g[u]){
        dfs(x);
    }
    s.push(u);
}
void dfs2(int u){
    if(mark[u]) return ;
    mark[u]=1;
    scc[u]=cnt;
    for(auto x: gt[u]){
        dfs2(x);
    }
}
int main()
{
    int n,m,k,i,j,r;
    scanf("%d %d %d",&n,&m,&k);
    for(i=1;i<=n;i++){
        scanf("%d",&j);
        while(j--){
            scanf("%d",&r);
            g[i].push_back(r),gt[r].push_back(i);
        }
    }
    for(i=1;i<=n;i++){
        if(!mark[i])
            dfs(i);
    }
    memset(mark,0,sizeof mark);
    while(!s.empty()){
        i=s.top(); s.pop();
        if(mark[i]) continue;
        scc[i]=++cnt;
        dfs2(i);
    }
    while(k--){
        scanf("%d %d",&i,&j);
        if(scc[i]==scc[j]) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
