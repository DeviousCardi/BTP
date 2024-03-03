#include <stdio.h>
int main() {
    int a,n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
        {scanf("%d",&a);} }
           { if((i==j)&&(a==1))
            printf("GIVEN %dx%d matrix is an IDENTITY MATRIX",n,n);
           else {   if((i!=j)&&(a==0))
                printf("GIVEN %dx%d matrix is an IDENTITY MATRIX",n,n);
                     else printf("GIVEN %dx%d matrix is NOT an IDENTITY MATRIX",n,n); } }
    return 0; }