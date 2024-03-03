#include <stdio.h>
#include<stdlib.h>
int main(){
     int n,m,k=0,i,j,t=0;
     scanf("%d",&n);
     for(i=1;i<=n;i++) {
         for(j=1;j<=n;j++) {
             scanf("%d",&m);
               if((m==1)&&(i==j)) {
                    k=k+1;}
                else if((i!=j)&&(m==0))
                        t=t+1; } }
     if((k==n)&&(t==(n*n-n)))
        printf("Given %d x %d matrix is an IDENTITY MATRIX",n,n);
      else
       printf("Given %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }