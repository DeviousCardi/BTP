#include <stdio.h>
int main(){
 int n,value,i,j;
 int check=1;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {for(j=1;j<=n;j++)
 {scanf("%d",&value);
 if(i==j)
 {if(value!=1)
 check=0; }
 else
 {if(value!=0)
     check=0; } } }
 if(check==1)
 printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
 else
 printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
 return 0; }