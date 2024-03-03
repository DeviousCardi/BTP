#include <stdio.h>
int main() {
   int n,i,j,k,max=-100;
   scanf("%d %d",&n,&k);
   int a[n];
   for ( i=0 ; i<n ;i++ )
    scanf("%d",&a[i]);
   for ( i=0 ; i<n ; i++ ) {
       for ( j=0 ; j<n-i ; j++ ) {
           if ( a[j]>max )
            max=a[j]; }
       a[n-1-i]=max+a[n-i-1];
       max=a[n-1-i]-max;
       a[i]=a[n-1-i]-max; }
   for ( i=0 ; i<n ; i++ )
    printf("%d ",a[i]);
    return 0; }