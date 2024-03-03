#include <stdio.h>
int main() {
     int a[100];
     int n ,i,p;
     int val,tamp,sum=0;
     scanf("%d",&n,&p);
     for (i=0; i<n; i++) {
         scanf("%d",&a[i]); }
     for(i=0; i<n; i++) {
         tamp=a[n-1];
         a[i+n-1]=a[i+n-1];
         a[i+n-2]=a[i+n-2]; }
   for(i=0;i<n; i++) {
        printf("% d\n",p,a[i]); }
    return 0; }