#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int i=0,j=0,count1=0,k=0,count=0;
    for(i=1;i<=n;i++)
    {count=0;
        for(j=1;j<=m;j++) {
            scanf("%d",&k);
            count+=k; }
        if(count1<count) {
            printf("%d\n",count); } }
    return 0; }