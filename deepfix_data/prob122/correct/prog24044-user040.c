#include <stdio.h>
int main() {
int i;
int j;
int n;
int A;
int flag=0;
for (i=0;i<0;i=i+1)
for (j=0;j<0;j=j+1) {
    scanf("%d" ,&n);
    if (i==j)
       if (n!=1)
       flag=1;
    else
        if (n!=0)
        flag=1; }
 if (flag=0)
 printf("GIVEN %d x %d matrix is an IDENTITY MATRIX" ,n,n);
   else {
   printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX" ,n,n); }
    return 0; }