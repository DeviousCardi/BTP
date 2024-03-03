#include <stdio.h>
int main(){
 int byr,sum=0;
 scanf("%d",&byr);
 int i,n=byr;
 for(i=0;n!=0;i++){
     sum=sum+(n%10);
     n=n/10; }
 int d=2016%sum;
 printf("%d",2016+d);
    return 0; }