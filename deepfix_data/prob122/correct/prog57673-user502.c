#include <stdio.h>
int main(){
    int n,i,j,p;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&p);
            if((i==j) &&(p!=1)){
                    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);goto jump;}
                else if(p!=0 && i!=j){
            printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n) ;
     goto jump;           } } }
 printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
 jump:
 return 0; }