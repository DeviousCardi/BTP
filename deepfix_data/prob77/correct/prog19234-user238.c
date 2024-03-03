#include <stdio.h>
int main() {
    int order[1000];
    int n,i,max,min,imax=0,imin=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",order[i]);
    max=order[0];
    min=order[0];
    for(i=0;i<n;i++) {
        if(order[i]>max) {
            max=order[i];
            imax=i; }
        if(order[i]<min) {
            min=order[i];
            imin=i; } }
    order[imin]=max;
    order[imax]=min;
    for(i=0;i<n;i++)
    printf("%d ",order[i]);
    printf("end");
    return 0; }