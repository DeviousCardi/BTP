#include <stdio.h>
int main() {
    int count,i,j,swap;
    scanf("%d",&count);
    int a[count];
    for(i=0;i<count;i++)
    scanf("%d",&a[i]);
    for(i=0;i<count;i++) {
        if(a[i-1]>a[i]) {
            for(j=i;j>=0;j--)
            if(a[j-1]>a[j]) {
                swap=a[j];
                a[j]=a[j-1];
                a[j-1]=swap; } } }
    for(i=0;i<count;i++)
    printf("%d ",a[i]);
    printf("end");
    return 0; }