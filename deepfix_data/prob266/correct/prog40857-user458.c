#include <stdio.h>
int main(){
 int n,j,i,sum=0;
 scanf("%d",&n);
 for(i=10;i<=1000;i=i*10){
     sum=sum+n%i; }
 for(j=n;j>=n;j++){
     while(j%sum==0){
         printf("%d",j);
         exit(0); } }
    return 0; }