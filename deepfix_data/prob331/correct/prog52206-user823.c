#include <stdio.h>
int main(){
    int n,p,i,j,b=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d ",&p);
            b=b+((i==j&&p==1)||(i!=j&&p==0)); } }
    if(b==n*n)
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }