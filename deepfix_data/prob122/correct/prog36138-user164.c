#include <stdio.h>
int main() {
    int n,i,j,test;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            if(j!=n)
            scanf("%d ",&test);
            if(j==n)
            scanf("%d\n",&test);
            if(i==j) {
                if(test==1)
                continue;
                else
                break; }
            if(i!=j) {
              if(test==0)
              continue;
              else
              break; } }
        if(!(((i==j)&&(test==1))||((i!=j)&&(test==0))))
        break; }
    if(!(((i==j)&&(test==1))||((i!=j)&&(test==0))))
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }