#include <stdio.h>
#include <stdlib.h>
int fact(int n) {
if(n==0)
return 1;
else
return 4*n-1/n+1*fact(n-1); }
int main() {
     int j,t,p;
     scanf("%d",&t);
     for(j=0;j<t;j=j+1){
     scanf("%d",&j);
 p=fact (j);
 if(fact(j)<p)
 printf("%d",p);
 else
 printf("%d",fact(j)); }
return 0; }