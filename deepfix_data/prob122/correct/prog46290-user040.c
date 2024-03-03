#include <stdio.h>
int main() {
int i;
int j;
int n;
int A;
int flag=0;
scanf("%d" ,&n);
for (i=1;i<=n;i=i+1) {
for (j=1;j<=n;j=j+1) {
    if (i==j)
       if (n!=1)
       flag=1;
    else
        if (n!=0)
        flag=1; } }
if (flag=0)
 printf("GIVEN %d x %d matrix is an IDENTITY MATRIX" ,n,n);
   else {
   printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX" ,n,n); }
    return 0; }