#include <stdio.h>
int main() {
    int count,i,max,min,x,y;
    scanf("%d",&count);
    int a[count];
    for(i=0;i<count;i++)
    scanf("%d",&a[i]);
    max=a[0];
    min=a[0];
    for(i=0;i<count;i++) {
        if(a[i]>=max) {
            max=a[i];
            x=i; }
        if(a[i]<=min) {
            min=a[i];
            y=i; } }
    a[y]=max;
    a[x]=min;
    for(i=0;i<count;i++)
    printf("%d ",a[i]);
    printf("end");
    return 0; }