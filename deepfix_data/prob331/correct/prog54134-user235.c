#include <stdio.h>
int main(){
    int a,b,c,d,e,i,j ;
    scanf ("%d",&a) ;
    for (i=1;i<=(a*a);i++) {
        scanf ("%d",&b) ;
     for (j=1;j<=(a*a);j=j+a+1)
     {if((i==j&&b==1)||(i!=j&&b==0))
        break ; }
     if (j>(a*a))
    { printf ("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",a,a) ;
        break ; } }
 if (i>(a*a))
 printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",a,a);
    return 0; }