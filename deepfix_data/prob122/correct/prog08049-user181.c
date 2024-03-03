#include <stdio.h>
int main() {
    int n,a;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
         scanf("%d",&a);
         if((i==j)&&(a==1))
         continue;
         else if((i!=j)&&(a==0))
         continue;
         else {
             j++;
             break; } }
        if((i==1)&&(j==1))
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
        if(i==j-1) {
             if(i==n) {
                printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
             break; }
             else if(a==1)
             continue;
             else {
                printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
             break; } }
        if(i!=j-1) {
            if(a==0)
            continue;
            else {
                printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
             break; } } }
    return 0; }