#include <stdio.h>
int main(){
 int n,i,l,j,a,k,s1=0,s2=0;
 scanf("%d",&n);
 for(i=1;i<=n;i++) {
     for (j=1;j<=n;j++) {
         scanf("%d",&a);
         k=((i==j)&&(a==1));
         l=((i!=j)&&(a==0));
         s1=s1+k;
         s2=s2+l; } }
 if((s1==n)&&(s2==n)) {printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);}
 else {printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);}
    return 0; }