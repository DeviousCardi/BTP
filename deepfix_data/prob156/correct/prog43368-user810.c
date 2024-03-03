#include <stdio.h>
int main() {
int n,m,i,s=0,max=0,k,j;
scanf("%d%d",&n,&m);
for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            scanf("%d",&k);
            s=s+k; }
        printf("%d\n",s);
        if(s>max) {
                max=s; }
        else
        continue;
        s=0; }
printf("%d",max);
    return 0; }