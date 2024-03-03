#include <stdio.h>
int main(){
int n,i,j,k,l=0;
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        scanf("%d",&k);
        if((j!=i && k==0) || (j==i && k==1)){
                continue;}
                else printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);break;}
 printf("\n");l=l+1;}
if (l==(n*n)) {
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);}
    return 0;}