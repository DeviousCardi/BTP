#include <stdio.h>
int main(){
    int n,i,k,count=0;
    scanf("%d",&n);
    int cost[n],sort[n];
    for(i=0;i<n;i++) {
        sort[i]=0;
        scanf("%d",&cost[i]); }
    for(i=0;i<n;i++) {
        count=0;
        for(k=0;k<n;k++) {
            if(cost[k]<=cost[i])
            count++; }
        sort[count-1]=cost[i]; }
    for(i=0;i<n;i++){
    printf("%d ",sort[i]);}
    printf("end");
    return 0; }