#include<stdio.h>
int main() {
    int i,n,b,count=0;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&b);
        a[0]=b;
        printf("%d",a[0]);
    for(i=1;i<n;i++) {
       if(a[0]<a[i]) {
           count=count+0; } }
    printf("%d",count);
    return 0; }