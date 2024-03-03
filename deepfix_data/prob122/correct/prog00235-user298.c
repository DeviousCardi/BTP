#include <stdio.h>
int main(){
    int n,i,j,a,c;
    scanf("%d\n",&n);
    c=0;
    for (i=1;i<=n;i++) {
        for (j=1;j<=n;j++) {
            scanf("%d",&a); } }
    for (i=1;i<=n;i++) {
        for (j=1;j<=n;j++) {
            if (i==j)
               { if (a==1)
                c++; }
            else
            c=0; }
        printf("\n"); }
    if(c==n)
    printf("GIVEN %d x %d matrix\n is an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d x %d matrix\n is NOT an IDENTITY MATRIX",n,n);
    return 0; }