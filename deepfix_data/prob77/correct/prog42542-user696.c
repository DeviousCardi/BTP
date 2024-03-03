#include <stdio.h>
int main() {
    int n,i,t,max=0,min=0;
    int amount[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&amount[i]); }
    for(i=0;i<n;i++) {
        if(amount[i]>amount[max])
       max=i; }
    for(i=0;i<n;i++) {
        if(amount[min]>amount[i])
        min=i; }
    t=amount[max];
    amount[max]=amount[min];
    amount[min]=t;
    for(i=0;i<n;i++) {
    printf("%d ",amount[i]); }
    printf("end");
    return 0; }