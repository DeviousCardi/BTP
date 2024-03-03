#include <stdio.h>
int main(){
    int i,j,n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",k);
            if ((i!=j && k=0) && (i==j && k==1))
            f=1; } }
    if (f==1)
            printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else
            printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }