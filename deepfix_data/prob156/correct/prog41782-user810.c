#include <stdio.h>
int main() {
int n,m,i,s=0,max=0,k;
scanf("%d%d",&n,&m);
for(i=1;i<=n;i++) {
        for(i=1;i<=m;i++) {
            scanf("%d",&k);
            s=s+k; }
        if(s>max) {
                max=s; }
        s=0; }
printf("%d",max);
    return 0; }