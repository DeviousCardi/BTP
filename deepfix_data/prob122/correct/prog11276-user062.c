#include <stdio.h>
int main(){
int n,i,j,k;
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        scanf("%d",&k);
        if(j!=i && k==0){
            if(j==i && k==1){
                printf("GIVEN %d x %d  matrix is an IDENTITY MATRIX",n,n);}}
                else printf("GIVEN %d x %d matrix is not an IDENTITY MATRIX",n,n);break;}
 printf("\n"); }
    return 0;}