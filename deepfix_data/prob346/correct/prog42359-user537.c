#include <stdio.h>
int main(){
    int n,i,j;
    int cost,am[1000];
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
   { scanf("%d",&cost);
    am[cost]=cost; }
    for(j=1;j<=n;j++)
    printf("%d ",am[j]);
    printf("end");
    return 0; }