/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int p[100100];
int fr(int i)
{
    if(p[i]==i)
        return i;
    return p[i]=fr(p[i]);
}
int main()
{
    int n,m,i,a,b;
    char o;
    scanf("%d %d",&n,&m);
    for(i=1; i<=n; i++)
        p[i]=i;
    while(m--)
    {
        scanf("%d %d",&a,&b);
        p[fr(a)]=fr(b);
    }
    scanf("%d",&m);
    while(m--)
    {
        scanf("%d %d",&a,&b);
        if(fr(a)==fr(b))
                printf("YES\n");
            else
                printf("NO\n");
    }
    return 0;
}
/*

5 4
3 5
3 4
2 5
3 2
3
1 5
2 4
2 1

*/
