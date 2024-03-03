#include <stdio.h>
int main() {
    int i,j,n,ele,flag=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&ele);
            if(i==j) {
                if(ele!=1)
                    flag=-1; }
            else {
                if(ele!=0)
                    flag=-1; } } }
    if(flag==1)
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else
        printf("GIVEN %d x %d matrix is not an IDENTITY MATRIX",n,n);
    return 0; }