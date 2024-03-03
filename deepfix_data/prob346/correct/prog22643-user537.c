#include <stdio.h>
int main(){
    int n,i,j;
    int cost[1000],am[1000];
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
   { scanf("%d",&cost[i]);
    am[cost[i]]=cost[i]; }
    for(j=0;j<n;j++)
    printf("%d ",am[j]);
    printf("end");
    return 0; }