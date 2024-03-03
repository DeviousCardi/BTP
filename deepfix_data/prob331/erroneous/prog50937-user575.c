#include <stdio.h>
#include<stdlib.h>
int main(){
     int n,m,k=0,i,j;
     scanf("%d",&n);
     for(i=1;i<=n;i++) {
         for(j=1;j<=n;j++) {
             scanf("%d",&m);
              if((m==1)&&(i==j))&&((m==0)&&(i!=j)) {
                k=k+1; } } }
     if(k==n)
        printf("Given 3 x 3 matrix is an IDENTITY MATRIX");
      else
       printf("Given 3 x 3 matrix is NOT an IDENTITY MATRIX");
    return 0; }