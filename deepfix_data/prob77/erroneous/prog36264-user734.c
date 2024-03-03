#include <stdio.h>
int main() {
    int b,i,largest,lowest,x,y;
    scanf("%d",&b);
    int a[b];
    scanf("%d",&a[0]);
    for(i=1;i<b;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<b;i++) {
        largest = a[0];
        if(largest<a[i]) {
            largest = a[i];
            x=i; } }
    for(i=0;i<b;i++) {
        lowest = a[0];
        if(lowest<a[j]) {
            lowest = a[i];
            y=i; } }
    i=a[x];
    a[x]=a[y];
    a[y]=i;
    for(i=0;i<b;i++)
    printf("%d ",a[i]);
    printf("end");
    return 0; }