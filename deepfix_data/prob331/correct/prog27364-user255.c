#include <stdio.h>
int main(){
 int i,j,a,n;
 scanf("%d",&n);
 while( i<=n ) {
     scanf("%d",&a);
     if ( i==j ) {
         if ( a==1 ) ;
         else {
                printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
            return 0; } }
     else {
        if ( a==0 ) ;
        else {
                printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
            return 0; } }
 j++;
 if ( j==n ) {
     i++;
     j=1; } }
printf("GIVEN %d x %d matrix is an identity matrix");
return 0; }