#include<stdio.h>
int main() {
    int a[20],i,n,count=1;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n-1;i++) {
       if(a[i]<a[i+1]) {
          count++; } }
    printf("%d",count);
    return 0; }