#include <stdio.h>
int main(){
 int n,k,i,j=1,flag_1=0,flag_0=0;
 scanf("%d",&n);
 for(i=1;i<=n*n;i++){
    scanf("%d",&k);
    if((i==(j-1)*n+j)&&k==1)
     { flag_1=flag_1+1;
         j++ }
    else if((i!=(j-1)*n+j)&&k==0)
      {flag_0=flag_0+1;} }
 if((flag_1==n)&&(flag_0==n*(n-1)))
 printf("INDETITY MATRIX");
 else
 printf("no");
    return 0; }