#include <stdio.h>
int main() {
    int n,i,j,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d%d",&i,&j); } }
    while(((i==j)&&(i==1))&&((i!=j)&&((i==0)&&(j==0)))) {
       a=1;
        j++;
        i++; }
    if(a==1)
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }