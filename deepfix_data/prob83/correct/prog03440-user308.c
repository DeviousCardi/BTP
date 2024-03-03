#include <stdio.h>
int main() {
     int a[100];
     int n ,i;
     int val,tamp,sum=0;
     scanf("%d",&n);
     for (i=0; i<n; i++) {
         scanf("%d",&a[i]); }
     for(i=0; i<n; i++) {
        a[0]=a[3];
        a[1]=tamp;
        a[2]=a[0];
        a[3]=a[1];
        a[4]=a[2]; }
    for(i=0;i<n; i++) {
        printf("%d",a[i]); }
    return 0; }