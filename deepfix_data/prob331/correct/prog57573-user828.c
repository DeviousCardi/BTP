#include <stdio.h>
int main(){
    int n,i,j,m,count=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++) {
            scanf("%d", &m);
            if(m==0&&j!=i) {
              count++; }
            else if(m==1&&j==i)
              count++; } }
    if(count==n*n)
       printf("GIVEN %d x %d matrix is an IDENTITY MATRIX", n, n);
    else
         printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX", n, n);
    return 0; }