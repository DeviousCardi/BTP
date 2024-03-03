#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int cost[n];
    for(int i=0;i<n;i++)
    scanf("%d",&cost[i]);
    for(int i=0;i<100;i++) {
        for(int j=0;j<n;j++) {
            if(i==cost[j])
            printf("%d ",i); } }
    printf("end");
    return 0; }