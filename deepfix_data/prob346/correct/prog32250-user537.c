#include <stdio.h>
int main(){
    int n,i;
    int cost[1000];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d",&cost[i]);
    for(i=0;i<n;i++){
    if(cost[i]<cost[i+1])
     printf("%d ",cost[i]);
    else
     cost[i+1]=cost[i];
     i=0; }
    printf("end");
    return 0; }