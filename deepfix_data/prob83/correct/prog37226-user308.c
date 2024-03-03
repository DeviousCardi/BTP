#include <stdio.h>
int rotated(int , int);
int main() {
     int a[100];
     int n,d ,i;
     int val,sum=0;
     scanf("%d",&n);
     for (i=0; i<n; i++) {
         scanf("%d",&a[i]); }
     for(i=0; i<n; i++) {
         val=a[i+3]%10;
         sum= sum+val;
         val= val/10; }
    printf("%d",sum);
    return 0; }