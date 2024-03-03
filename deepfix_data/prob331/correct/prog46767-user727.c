#include <stdio.h>
int main() {
    int flag,i,j,n,a;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a);
            if(i==j) {
                if(a==1)
                flag=0;
                else
                flag=-1; }
            else {
                if(a==0)
                flag=0;
                else
                flag=-1; } } }
    if(flag==0)
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }