#include <stdio.h>
int main() {
   int n,m,i,j,ar[200];
    scanf("%d%d\n",&n,&m);
    for(i=1;i<=n;i=i+1)
    {    int sum=0;
        for(j=1;j<=m;j=j+1) {
                scanf("%d",&ar[j]);
                sum=sum+ar[j]; }
            ar[i]=sum;
                 printf("%d",ar[i]);
         printf("\n"); }
    return 0; }