#include <stdio.h>
int main() {
    int n,i,j,a,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
        scanf("%d",&a);
        if(i==j&&a==1)
        count=count+1;
        if(i!=j&&a==0)
        count=count+1; }
       if(count==n*n)
            printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
        else
            printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }