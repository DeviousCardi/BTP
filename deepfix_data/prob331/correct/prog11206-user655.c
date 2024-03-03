#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int p;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&p);
            if(i==j){
                if(p==1){continue;}
                else{break;} }
                     if(i!=j){
                         if(p==0){continue;}
                         else{break;} } }
        if((i==j)&&(p!=1)){break;}
        if((i!=j)&&(p!=0)){break;}
        if(i==n){printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);} }
     if((i==j)&&(p!=1)){printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);}
        if((i!=j)&&(p!=0)){printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);}
    return 0; }