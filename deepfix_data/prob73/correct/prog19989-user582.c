#include <stdio.h>
int main() {
    int n,m,i,t,s,max;
    max=0;s=0;
    scanf("%d %d",&n,&m);
    while(n--) {
        for (i=0;i<m;i++) {
            scanf("%d",&t);
            s=s+t; }
        if (s>max)
        max=s; }
    printf("%d",max);
    return 0; }