#include <stdio.h>
int rotated(int , int);
int main() {
     int a[100];
     int n ,i;
     int val,sum=0;
     scanf("%d",&n);
     for (i=0; i<n; i++) {
         scanf("%d",&a[i]); }
     for(i=0; i<n; i++) {
       int t=a[4];
       a[4]=a[3];
       a[3]=a[2];
       a[1]=a[0];
       a[0]=t; }
    return 0; }