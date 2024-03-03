#include <stdio.h>
int main(){
    int n,i,j;
    int cost[9999];
    int count[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&cost[i]); }
    for(i=0;i<100;i++){
    count[i]=0;
        for(j=0;j<n;j++){
            if(cost[j]==i) count[i]=count[i]+1; } }
    for(i=0;i<100;i++){
        printf("%d ",count[i]); }
    printf("end");
    return 0; }