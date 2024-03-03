#include <stdio.h>
int main() {
   int n,i,j,k;
   scanf("%d %d",&n,&k);
   int a[n];
   for ( i=0 ; i<n ;i++ )
    scanf("%d",&a[i]);
   for ( i=0 ; i<n ; i++ ) {
       int min=a[i];
       for ( j=i+1 ; j<n ; j++ ) {
           if ( a[j]<=min )
            min=a[j]; }
       a[i]=min+a[i];
       min=a[i]-min;
       a[i]=a[i]-min; }
   printf("%d",a[n-2]);
    return 0; }