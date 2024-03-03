#include <stdio.h>
int main(){
    int n,i,j,a,b=0,d=0;
    scanf("%d",&n);
    for(i=n;i>0;i--) {
    for(j=n;j>0;j--) {
          if(i==j) {
          if(a==1)
              b=1;
          } else {
          if(a==0)
              d=1; } }
    printf("\n"); }
    if(b==1 && d==1)
    printf("GIVEN n x n matrix is an IDENTITY MATRIX.");
    else
     printf("GIVEN n x n matrix is NOT an IDENTITY MATRIX.");
 return 0; }