#include <stdio.h>
int main(){
 int n,i=1,j=1,count=0;
 scanf("%d",&n);
 for(i=1;i<=n;i++){
     for(j=1;j<=n;j++){
         int a;
         scanf("%d",&a);
         if((i==j)&&(a==1)){
             count = count +1; } } }
 printf("%d",count);
    if(count==n) printf("IDENTITY MATRIX");
    else printf("NOT an IDENTITY MATRIX");
    return 0; }