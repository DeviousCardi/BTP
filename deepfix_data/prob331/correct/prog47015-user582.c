#include <stdio.h>
int main(){
    int i,n,c=0,k;
    scanf("%d",&n);
    for (i=0;i<n*n;i++) {
        scanf("%d",&k);
        if(i%(n+1)==0 && k==1)
        c++;
        else if(i%(n+1)!=0 && k==0)
        c++; }
    if(c==n*n)
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }