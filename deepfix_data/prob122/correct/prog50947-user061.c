#include <stdio.h>
int main(){
 int n,i,j,a;
 scanf("%d\n", &n);
 for(i=0;i<n;i++){
     for(j=0;j<n;j++){
         scanf("%d",&a); } }
      {if(((i==j)&&(a==1))||((i!=j)&& (a==0))){
              printf("GIVEN %d * %d matrix is an IDENTITY MATRIX", n,n);}
         else printf("GIVEN %d * %d matrix is not an IDENTITY MATRIX",n,n); }
    return 0; }