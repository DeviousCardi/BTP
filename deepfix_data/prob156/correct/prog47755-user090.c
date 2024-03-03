#include <stdio.h>
int main() {
    int m,n,c,i,j;
    int max ;
    scanf("%d%d",&n,&m);
     int sum ;
    for(i=1;i<=n;i++)
    {  sum=0;
        for(j=1;j<=m;j++) {
         scanf("%d",&c);
        sum=sum+c; }
     printf("%d\n",sum); }
    printf("%d\n",sum);
    return 0; }