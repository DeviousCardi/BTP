#include<stdio.h>
int main() {
    int i,n,b,count;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&b);
        a[0]=b;
    for(i=1;i<n;i++) {
       if(a[0]<a[i]) {
           count=0;
           count=count+1;
           a[0]=a[i]; } }
    printf("%d",count);
    return 0; }