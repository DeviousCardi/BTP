#include <stdio.h>
int main(){
    int n,i,j,a;
    scanf("%d",&n);
    int cost[n];
    for(i=0;i<n;i++) {
        scanf("%d",&cost[i]); }
    for(j=0;j<n;j++) {
        for(i=0;i<n-1;i++) {
            if(cost[i]>cost[i+1]) {
               a=cost[i];
               cost[i]=cost[i+1];
               cost[i+1]=a; } } }
    for(i=0;i<n;i++) {
        printf("%d ",cost[i]); }
    printf("end");
    return 0; }