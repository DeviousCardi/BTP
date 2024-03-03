#include <stdio.h>
int main() {
   int n,i,j,k;
   scanf("%d %d",&n,&k);
   int a[n];
   for ( i=0 ; i<n ;i++ )
    scanf("%d",&a[i]);
   for ( i=0 ; i<n ; i++ ) {
       for ( j=0 ; j<n-i ; j++ ) {
           if ( a[j]>a[j+1] ) {
                a[j+1]=a[j]+a[j+1];
                a[j]=a[j+1]-a[j];
                a[j+1]=a[j+1]-a[j]; } } }
    for ( i=0 ; i<n ; i++ )
        printf("%d ",a[n-k-1]);
    return 0; }