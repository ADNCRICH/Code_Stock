/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[1010];
int w[1010],mark[1010],j;
long long sum,ma = -1000000000000;
void dfs(int u){
    if(mark[u]==j) return ;
    mark[u] = j;
    sum += w[u];
    for(auto &x: g[u]){
        dfs(x);
    }
}
int main()
{
	int n,m,i,ans = 1,r,s;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++){
        scanf("%d",&w[i]);
	}
	for(i=0;i<m;i++){
        scanf("%d %d",&r,&s);
        g[r].push_back(s);
	}
	for(j=1;j<=n;j++){
        sum = 0;
        dfs(j);
        if(sum > ma){
            ma = sum, ans = j;
        }
	}
	printf("%d %lld\n",ans,ma);
    return 0;
}
/*
5 6
7 2 3 9 4
1 3
2 5
4 1
3 5
4 5
2 1
*/
