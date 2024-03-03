#include <stdio.h>
int main(){
    int i,j,n,p,b;
    b=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
        scanf("%d ",&p);
        b=b+((p==1&&j==i)||(p==0&&j!=i)); } }
 if(b==n*n){
     printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
 else{
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    return 0; }