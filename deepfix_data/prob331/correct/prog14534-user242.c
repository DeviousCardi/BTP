#include <stdio.h>
int main(){
 int n,i,j,a,flag=0,flag1=0;
 scanf("%d",&n);
 for(i=1;i<=n;i++){
     for(j=1;j<=n;j++){
         scanf("%d",&a);
         if(i==j){
             if(a==1) flag=flag+1; }
         else{
             if(a!=0){
               flag1=1;
               break; } } }
     if(flag1==1) break; }
 if(flag==n) printf("GIVEN %d * %d matrix is an IDENTITY MATRIX",n,n);
 else if(flag!=n||flag1==1) printf("GIVEN %d * %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }