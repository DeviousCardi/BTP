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
    for(cost=0;cost<=99;cost++)
    {for(i=0;i<=n-1;i++) {
         if(amount[i]==cost)
         printf("%d ",cost); } }
    printf("end");
    return 0; }