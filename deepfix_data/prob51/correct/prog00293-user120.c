#include <stdio.h>
int main() {
   int n,k;
   scanf("%d %d",&n,&k);
   int t;
   int a[n];
   for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(a[j]<a[j+1]) {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t; } } }
    printf("%d",a[k-1]);
    return 0; }