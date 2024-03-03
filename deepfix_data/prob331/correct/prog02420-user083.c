#include <stdio.h>
int main(){
    int i,j,n,m,k=0;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&m);
            if((j==i)&&(m==1))
            k=k+1;
            else if((j!=i)&&(m!=0))
            k=k-1; }
        scanf("\n"); }
    if(k==n)
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }