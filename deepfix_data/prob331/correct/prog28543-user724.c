#include <stdio.h>
int main() {
    int i,j,n,p,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&p);
            if((i==j && p==1)||(i!=j && p==0))
            count=count+1; }
        scanf("\n"); }
    if(count==(n*n))
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }