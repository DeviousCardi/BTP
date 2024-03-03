#include <stdio.h>
int main() {
     int a[100];
     int n ,i;
     int val,tamp,sum=0;
     scanf("%d",&n);
     for (i=0; i<n; i++) {
         scanf("%d",&a[i]); }
     for(i=0; i<n; i++) {
         if(i<n-1)
         tamp=a[n-1];
         a[i+0]=a[n-2];
         a[i+1]=tamp;
         a[i+2]=a[n-4];
         a[i+3]=a[n-3];
         a[i+4]=a[n-3]; }
   for(i=0;i<n; i++) {
        printf("% d",a[i]); }
    return 0; }