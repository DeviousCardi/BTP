#include <stdio.h>
int main(){
    int n,i,j,k;
    int cost,am[100];
    scanf("%d\n",&n);
    for(j=0;j<99;j++)
        am[j]=0;
    for(i=1;i<=n;i++)
   { scanf("%d",&cost);
    am[cost]+=1; }
   for(j=0;j<99;j++) {
        for(k=0;k<am[j];k++)
            printf("%d ",am[j]); }
    printf("end");
    return 0; }