#include <stdio.h>
int main(){
    int n,i,j,a;
    scanf("%d",n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d,a");
            if((i==j && a==1) ||(a!=j && a==0)
                printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
            else
                print("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n) } }
    return 0; }