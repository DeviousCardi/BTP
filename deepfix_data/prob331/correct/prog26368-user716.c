#include <stdio.h>
int main(){
    int n,a,j;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a);
            if(j==i && a==1){continue;}
            else if(j==i && a!=1){printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);return 0;}
            else if(j!=i && a!=0){printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);return 0;}
            else{continue;} } }
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }