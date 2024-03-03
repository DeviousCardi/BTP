#include <stdio.h>
int main(){
    int n,i,j,a,flag = 1;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&a);
            if((i==j && a!=1) || (i!=j && a!=0))
                flag = 0;
                break; }
        if(flag==0)
            break;
        printf("\n"); }
    if(flag==0)
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    else
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }