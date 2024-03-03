#include <stdio.h>
int main() {
     int a[100];
     int n ,i;
     int val,tamp,sum=0;
     scanf("%d",&n);
     for (i=0; i<n; i++) {
         scanf("%d",&a[i]); }
     for(i=0; i<n; i++) {
         tamp=a[4];
         a[4]=a[3];
         a[3]=a[2];
         a[2]=a[1];
         a[0]=tamp; }
   for(i=0;i<n; i++) {
        printf("%d",a[i]); }
    return 0; }