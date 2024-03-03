#include <stdio.h>
int main(){
       int n,i,j,A,flag=0;
       scanf("%d\n",&n);
       for(i=1;i<=n;i=i+1) {
            for(j=1;j<=n;j=j+1) {
                scanf("%d",&A);
                if(i==j) {
                    if(A!=1)
                        flag=1; }
                else {
                   if(A!=0)
                        flag=1; } }
            printf("\n"); }
        if(flag=0)
          printf("GIVEN nxn matrix is an IDENTITY MATRIX",n,n);
        else
          printf("GIVEN nxn matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }