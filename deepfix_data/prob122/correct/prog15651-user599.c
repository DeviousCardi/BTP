#include <stdio.h>
int main(){
    int a,p=0,i,j,n;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&a);
            if(i==j) {
                if(a!=1) {
                    p=1;
                    break; } }
            else {
                if(a!=0) {
                    p=1;
                    break; } } } }
    if(p==0)
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }