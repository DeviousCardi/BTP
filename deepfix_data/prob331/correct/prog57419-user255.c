#include <stdio.h>
int main(){
 int i=1,j=1,a,n;
 scanf("%d\n",&n);
 while( i<=n ) {
     scanf("%d ",&a);
     if ( i==j ) {
         if ( a==1 ) ;
         else {
                printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
            return 0; } }
     else {
        if ( a==0 ) ;
        else {
                printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
            return 0; } }
if ( j==n ) {
     i++;
     j=1; }
 j++; }
printf("GIVEN %d x %d matrix is an IDENTITY MATRIX");
return 0; }