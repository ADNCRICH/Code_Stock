/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int type,i,j;
    bool operator < (const A & o) const{
        if(type!=o.type) return type < o.type;
        else if(j!=o.j)  return j < o.j;
        return i < o.i;
    }
};
vector<A> ans;
A temp;
void play(int n,int imid,int jmid,int iho,int jho){
    int quad;
    if(iho < imid && jho>=jmid) quad =1;
    else if(iho<imid && jho < jmid) quad = 0;
    else if(iho>=imid && jho < jmid) quad=2;
    else    quad = 3;
    ans.push_back({quad,imid-1,jmid-1});
    if(n<=2)    return ;
    if(quad == 1)  play(n/2,imid-n/4,jmid+n/4,iho,jho);
    else           play(n/2,imid-n/4,jmid+n/4,imid-1,jmid);
    if(quad == 0)  play(n/2,imid-n/4,jmid-n/4,iho,jho);
    else           play(n/2,imid-n/4,jmid-n/4,imid-1,jmid-1);
    if(quad == 2)  play(n/2,imid+n/4,jmid-n/4,iho,jho);
    else           play(n/2,imid+n/4,jmid-n/4,imid,jmid-1);
    if(quad == 3)  play(n/2,imid+n/4,jmid+n/4,iho,jho);
    else           play(n/2,imid+n/4,jmid+n/4,imid,jmid);
}
int main()
{
    int i,n,iho,jho;
    scanf("%d %d %d",&n,&jho,&iho);
    play(n,n/2,n/2,iho,jho);
    sort(ans.begin(),ans.end());
    printf("%d\n",ans.size());
    for(i = 0;i<ans.size();i++){
        printf("%d %d %d\n",ans[i].type,ans[i].j,ans[i].i);
    }
    return 0;
}
