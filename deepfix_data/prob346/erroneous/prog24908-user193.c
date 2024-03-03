#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int amount[n];
    int cost;
    int i;
    for(i=0;i<=n-1;i++) {
        scanf("%d",&cost);
        amount[i]=cost; }
    for(i=0;i<=n-1;i++) {
        if(amount[i]>amount[i+1])
            int tem;
            tem=amount[i];
            amount[i+1]=amount[i];
            amount[i]=amount[i+1]; }
    for(i=0;i<=n-1;i++) {
        printf("%d",amount[i]); }
    printf("end");
    return 0; }