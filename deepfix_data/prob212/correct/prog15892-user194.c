#include <stdio.h>
int main(){
 int n,i,d,sum=0;
 scanf("%d",&n);
 while(n!=0) {
    d=n%10;
    sum=sum+d;
    n=n/10; }
 for(i=2016;;i++) {
     if(i%sum==0) {
        printf("%d",i);
        break; } }
    return 0; }