#include<stdio.h>
int main() {
    int a[20],i,n,count;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        a[i]<a[i+1]
        count++; }
    printf("%d",count);
    return 0; }