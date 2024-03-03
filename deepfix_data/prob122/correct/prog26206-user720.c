#include <stdio.h>
int main(){
    int i,j,n,a,k;
    scanf("%d\n",&n);
    for(i=1; i<=n; i=i+1){
    for(j=1; j<=n; j=j+1){
    scanf("%d",&a);
    if(((i==j)&&(a==1))&&((i!=j)&&(a!=1)))
    {k=k+1;}}
    scanf("\n");}
    if (k==n){printf("GIVEN %d",n);
    printf(" x %d",n);
    printf(" matrix is an IDENTITY MATRIX");}
     else {printf("GIVEN %d",n);
    printf(" x %d",n);
    printf(" matrix is NOT an IDENTITY MATRIX");}
    return 0; }