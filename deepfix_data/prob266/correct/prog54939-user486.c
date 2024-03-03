#include <stdio.h>
int main(){
 int i,n,t;
 scanf("%d",n);
 t=n/1000+n%10+(n%100)/10+(n%1000)/100;
 for(i=0;i>=0;i++) {
     if((2016+i)%t==0)
    { printf("%d",2016+i);
      break;} }
    return 0; }