#include <stdio.h>
int main() {
     int i,j,n,a, flag=0;
     scanf("%d",&n);
     for (i=1;i<=n;i++) {
             for (j =1;j<n;j++) {
                 scanf("%d",&a);
                 if (!((i==j&&a ==1)||(i!=j&&a==0)))
                    flag=1; } }
        if (flag==0)
         printf("GIVEN n x n matrix is an IDENTITY MATRIX");
         else(flag==1);
         printf("GIVEN n x n matrix is NOT an IDENTITY MATRIX");
    return 0; }