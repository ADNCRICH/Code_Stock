/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,w;
};
queue<A> bfs;
int a[1010][1010],mark[1010][1010];
int di[4] = {1,-1,0,0},dj[4]={0,0,1,-1};
int main()
{
    int w,n,m,i,j,ans=0,k,ii,jj;
    scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            bfs.push({i,j,0});
        }
	}
	while(!bfs.empty()){
        i = bfs.front().i,j=bfs.front().j,w=bfs.front().w;
        bfs.pop();
        if(mark[i][j]) continue;
        mark[i][j] = 1;
        ans++;
        for(k=0;k<4;k++){
            ii=i+di[k],jj=j+dj[k];
            if(ii<0||ii>=n||jj<0||jj>=m)    continue;
            if(w+1 >= a[ii][jj])    continue;
            bfs.push({ii,jj,w+1});
        }
	}
	printf("%d\n",n*m-ans);
    return 0;
}
