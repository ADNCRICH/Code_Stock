/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: KVIS
*/
#include<bits/stdc++.h>
using namespace std;
int in[100100];
vector<int> a,g[100100];
priority_queue<int> b;
int main()
{
    int q,n,m,r,s,i;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d",&n,&m);
        while(m--)
        {
            scanf("%d %d",&r,&s);
            g[r].push_back(s);
            in[s]++;
        }
        for(i=1; i<=n; i++)
            if(!in[i])
                b.push(-i);
        while(!b.empty())
        {
            r=b.top()*-1;
            b.pop();
            a.push_back(r);
            for(auto x:g[r])
            {
                in[x]--;
                if(in[x]==0)
                    b.push(-x);
            }
        }
        if(a.size()==n)
        {
            printf("Yes ");
            for(auto x:a)
                printf("%d ",x);
            printf("\n");
        }
        else
            printf("No\n");
        for(i=0; i<=n; i++)
            g[i].clear();
        a.clear();
        memset(in,0,sizeof in);
    }



    return 0;
}

