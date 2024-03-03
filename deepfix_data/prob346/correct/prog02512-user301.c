#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int cost[n];
    for(i=0;i<n;i++)
    {for(j=i+1;j<n;j++) {
        if(cost[i]>cost[j]) {
            cost[i]=cost[i]+ cost[j];
            cost[j]=cost[i]-cost[j];
            cost[i]=cost[i]-cost[j]; } } }
    for(i=0;i<n;i++) {
        printf("%d ",cost[i]); }
    printf("end");
    return 0; }