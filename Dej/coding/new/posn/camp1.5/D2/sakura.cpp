/*
    TASK:
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    char a[20];
    long long val,len;

};
long long b[10970273];
queue<A> bfs;
int main()
{
	long long i,cou=0,len,val,idx;
	char c[20];
	long long q,sum;
	A temp;
	for(i=00;i<26;i++){
        temp.a[0]='a'+i;
        temp.a[1]='\0';
        temp.val = i+1;
        temp.len = 1;
        bfs.push(temp);
	}
	while(!bfs.empty()){
        temp = bfs.front(); bfs.pop();
        strcpy(c,temp.a); len=temp.len; val = temp.val;
        b[cou++]=temp.val;
        if(len==11)
            break;
        for(i=c[len-1]-'a'+1;i<=25;i++){
            temp.a[len]=i+'a';
            temp.val = val*27+i+1;
            temp.a[len+1]='\0';
            temp.len = len+1;
            bfs.push(temp);
        }
	}
	scanf("%lld",&q);
	while(q--){
        scanf(" %s",c);
        len = strlen(c);
        for(i=0,sum=0;i<len;i++){
            sum*=27,sum+=c[i]-'a'+1;
        }
        idx = lower_bound(b,b+cou,sum)-b;
        if(b[idx]==sum) printf("%d\n",idx+1);
        else            printf("0\n");
	}
    return 0;
}
