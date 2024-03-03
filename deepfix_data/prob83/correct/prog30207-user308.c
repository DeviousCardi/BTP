#include <stdio.h>
int main() {
     int a[100];
     int n ,i;
     int val,tamp,sum=0;
     scanf("%d",&n);
     for (i=0; i<n; i++) {
         scanf("%d",&a[i]); }
     for(i=0; i<n; i++) {
         tamp=a[n-1];
         a[i+0]=a[n-2];
         a[3]=a[i];
         a[2]=a[i];
         a[0]=tamp; }
   for(i=0;i<n; i++) {
        printf("%d",a[i]); }
    return 0; }