#include <stdio.h>
int main(){
    int n,s,k,a;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a);}
            if((i==j)&&(a==1)){
                s=1; }
            else if((i==j)&&(a!=1)){
                s=0;
                k=0;
                break; }
            else if((i<=j)&&(a==0)){
                k=1; }
            else if((i>=j)&&(a==0)){
                k=1; }
            else(((i<=j)||(i>=j))&&(a!=0)){
                s=0;
                k=0;
                break; } }
            if((s==1)&&(k==1)){
                printf("GIVEN %d x %d matrix is an INDENTITY MATRIX",n); }
            else{
                printf("GIVEN %d x %d matrix is NOT  an INDENTITY MATRIX",n); }
    return 0; }