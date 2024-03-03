#include <stdio.h>
int main() {
    int n,c=-1,i,j;
    scanf("%d",&n);
    for(i=0;i<n+1;++i) {
        for(j=i;j<n;++j){printf(" ");++c;}
        for(j=0;j<=i;++j){++c; if((c+i+1)%2==0)printf("x");else printf("*");}
        printf("\n");
        c=-1; }
    for(i=0;i<n;++i)
    {  c=0;
        for(j=n;j>=n-i;--j){printf(" ");++c;}
        for(j=i+1;j<=n;++j){++c; if((c+i+1)%2==0)printf("x");else printf("*");}
        printf("\n");
        c=0; }
    return 0; }