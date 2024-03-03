#include <stdio.h>
#include <stdlib.h>
int h(int n) {
if(h(n)==0)
return 1;
else
return (4*n*n)-(2*n) /(n+1)*(n); }
 int main(){
     int i,t,p;
     scanf("%d",&t);
     for(i=0;i<9;i=i+1){
     scanf("%d",&i);
     p=h(i); }
     printf("%d",p);
return 0; }