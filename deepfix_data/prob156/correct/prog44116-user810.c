#include <stdio.h>
int main() {
int n,m,i,s=0,max=0,k,j;
scanf("%d%d",&n,&m);
for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            scanf("%2d",&k);
            s=s+k; }
        if(s>max) {
                max=s; }
        s=0; }
printf("%d",max);
    return 0; }