#include<stdio.h>
int main() {
    int i,n,count=0;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&a);
        a[0]=a;
        printf("%d",a[0]);
    for(i=1;i<n;i++) {
       if(a[0]<a[i]) {
           printf("%d",a[i]);
           count=count+0; } }
    printf("%d",count);
    return 0; }