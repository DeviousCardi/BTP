#include<stdio.h>
int main() {
    int n,i,j,a;
    int count=0;
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            scanf("%d",&a);
            if ((i==j && a==1) || (i!=j && a==0))
            count=count+1; } }
    if (count==n*n)
      printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else
      printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }