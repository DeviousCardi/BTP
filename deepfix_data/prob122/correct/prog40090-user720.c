#include <stdio.h>
int main(){
    int i,j,n,a,k,flag=0;
    k=0;
    scanf("%d\n",&n);
    for(i=1; i<=n; i=i+1){
    for(j=1; j<=n; j=j+1){
    scanf("%d",&a);
    if((i==j)&&(a==1))
    {k=k+1;}
    else if ((i!=j)&&(a!=0)){flag=1;break;} }
    if(flag)
        break; }
    if (k==n){printf("GIVEN %d",n);
    printf(" x %d",n);
    printf(" matrix is an IDENTITY MATRIX");}
     else {printf("GIVEN %d",n);
    printf(" x %d",n);
    printf(" matrix is NOT an IDENTITY MATRIX");}
    return 0; }