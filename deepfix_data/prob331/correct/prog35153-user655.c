#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int p;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&p);
            if(i==j){
                if(p==1){
                    if((i==n)&&(j==n)){printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);}
                    continue;}
                if(p!=1){
                 printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
                    break;} }
                     if(i!=j){
                         if(p==0){
                       if((i==n)&&(j==n)){printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);}
                             continue;}
                         if(p!=0){
                             printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
                             break;} } } }
    return 0; }