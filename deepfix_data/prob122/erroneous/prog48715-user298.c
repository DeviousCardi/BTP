#include <stdio.h>
int main(){
    int n,i,j,a,c;
    scanf("%d\n",&n);
    c=o;
    for (i=1;i<=n;i++) {
        for (j=1;j<=n;j++) {
            scanf("%d",&a); }
        printf("\n"); }
    for (i=1;i<=n;i++) {
        for (j=1;j<=n;j++) {
            if (i==j)
                if (a==1)
                c++;
            else
            c=0; }
        printf("\n"); }
    if(c==n)
    printf("GIVEN %d * %d matrix\n is an IDENTITY MATRIX",n);
    else
    printf("GIVEN %d * %d matrix\n is NOT an IDENTITY MATRIX",n);
    return 0; }