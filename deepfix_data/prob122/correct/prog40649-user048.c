#include <stdio.h>
int main() {
    int n,i,j,a,x=0,y=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&a);
            if((i==j)&&(a==1)) {
               x=x+1; }
            if((i!=j)&&(a==0)) {
                y=y+1; } } }
    if((x==n)&&(y==(n*n)-n)) {
        printf("GIVEN %dx%d matrix is an IDENTITY matrix",n,n); }
    else {
        printf("GIVEN %dx%d matrix is NOT an IDENTITY matrix",n,n); }
    return 0; }