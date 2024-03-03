#include <stdio.h>
int main(){
 int i,j,a,n,sum=0;
 scanf("%d",&n);
 for(i=0;i<4;i++) {
     a=n%10;
     sum=sum+a;
     n=n/10; }
 for(j=2016;;j++) {
     if(j%sum==0){
     printf("%d",j);
     break; } }
    return 0; }