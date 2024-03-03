#include <stdio.h>
int main() {
    int n,m,i,j,a,b,t,max;
    scanf("%d %d",&n,&m);
    for(i=0;i<=n-1;i++) {
        a=0;
        for(j=0;j<=m-1;j++) {
            scanf("%d ",&b);
            a=a+b;
            if(a>=max)
            max=a; } }
    printf("%d",max);
return 0; }