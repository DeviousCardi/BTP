#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,j;
    int flag=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            int e;
            scanf("%d",&e);
            if(i==j){
                if(e!=1){
                    flag=1;
                    break; } }
            else{
                if(e!=0){
                    flag=1;
                    break; } } }
        if(flag==1)
        break; }
    if(flag==1)
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }