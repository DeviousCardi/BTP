#include <stdio.h>
int main() {
    int n,i,j,k,c=0,d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&k);
            if((i!=j)&&(k==0))
            c++;
            else
            if((i==j)&&(k==1))
            c++; }
        if(c==n)
        d++;
        c=0; }
    if(d==n)
       printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else
       printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }