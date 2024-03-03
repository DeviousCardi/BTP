#include <stdio.h>
int main() {
    int n,i,j,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d%d",&a,&b); } }
    if(((i==j)&&(a==1))&&((i!=j)&&((a==0)&&(b==0))))
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else if(((i==j)&&(a!=1))||((i!=j)&&((a!=0)||(b!=0))))
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }