#include <stdio.h>
int main() {
    int n,i,t,max=0,min=0;
    int amount[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",amount[i]); }
    for(i=0;i<n;i++) {
        if(amount[i]>max)
       max=amount[i]; }
    for(i=0;i<n;i++) {
        if(min>amount[i])
        min=amount[i]; }
    t=max;
    max=min;
    min=t;
    for(i=0;i<n;i++) {
    printf("%d",amount[i]); }
    printf("end");
    return 0; }