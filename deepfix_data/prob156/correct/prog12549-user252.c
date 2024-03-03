#include <stdio.h>
int main() {
    int n,m,i,j,c,t,d=0;
    scanf("%d %d\n",&n,&m);
    for(i=0;i<n;i++) {
        c=0;
        for(j=0;j<m;j++) {
            scanf("%d ",&t);
            if(j==m-1) scanf("\n");
            c=c+t; }
        if(c>d) d=c; }
    printf("%d\n",d);
    return 0; }