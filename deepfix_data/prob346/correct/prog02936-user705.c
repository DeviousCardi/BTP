#include <stdio.h>
int main(){
    int n,temp;
    int cost[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&cost[i]); }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(cost[i]>cost[j]){
                temp=cost[j];
                cost[j]=cost[i];
                cost[i]=temp; } } }
    printf("end");
    return 0; }